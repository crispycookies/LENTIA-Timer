//
// Created by TobiEgger on 15.03.2020.
//

#include "TimerBasicImplWithPWM.h"

bool TimerBasicImplWithPWM::init(BasicTimerWithPWM *basic_timer_w_pwm) {
	if(basic_timer_w_pwm == nullptr){
		return false;
	}
	if(basic_timer_w_pwm->isPWMRequested()){
		return pwm_init(basic_timer_w_pwm);
	}else{
		return TimerBasicImpl::init(basic_timer_w_pwm);
	}
}

bool TimerBasicImplWithPWM::de_init(BasicTimerWithPWM *basic_timer_w_pwm) {
	if(basic_timer_w_pwm == nullptr){
		return false;
	}
	if(basic_timer_w_pwm->isPWMRequested()){
		return pwm_de_init(basic_timer_w_pwm);
	}else{
		return TimerBasicImpl::de_init(basic_timer_w_pwm);
	}
}

bool TimerBasicImplWithPWM::start(BasicTimerWithPWM *basic_timer_w_pwm) {
	if(basic_timer_w_pwm == nullptr){
		return false;
	}
	if(!basic_timer_w_pwm->isPWMRequested()){
		return TimerBasicImpl::start(basic_timer_w_pwm);
	}
	return !(HAL_TIM_PWM_Start(&handle, channel) != HAL_OK);
}

bool TimerBasicImplWithPWM::stop(BasicTimerWithPWM *basic_timer_w_pwm) {
	if(basic_timer_w_pwm == nullptr){
		return false;
	}
	if(!basic_timer_w_pwm->isPWMRequested()){
		return TimerBasicImpl::stop(basic_timer_w_pwm);
	}
	return !(HAL_TIM_PWM_Stop(&handle, channel) != HAL_OK);
}

bool TimerBasicImplWithPWM::pwm_init(BasicTimerWithPWM *basic_timer_w_pwm) {
	if(basic_timer_w_pwm == nullptr){
		return false;
	}
	if(!fetchData(basic_timer_w_pwm)){
		return false;
	}
	//Initialized
	if(!basic_timer_w_pwm->isPWMRequested()){
		return TimerBasicImpl::init(basic_timer_w_pwm);
	}

	if(HAL_TIM_PWM_Init(&handle)!=HAL_OK){
		return false;
	}
	if(HAL_TIMEx_MasterConfigSynchronization(&handle, &sMasterConfig)!=HAL_OK){
		return false;
	}
	if(HAL_TIM_PWM_ConfigChannel(&handle, &sConfigOC,  channel)!=HAL_OK){
		return false;
	}
	if(HAL_TIMEx_ConfigBreakDeadTime(&handle, &sBreakDeadTimeConfig)!=HAL_OK){
		return false;
	}
	instance_counter++;

	return true;
}

bool TimerBasicImplWithPWM::pwm_de_init(BasicTimerWithPWM *basic_timer_w_pwm) {
	if(!basic_timer_w_pwm->isPWMRequested()){
		return TimerBasicImpl::de_init(basic_timer_w_pwm);
	}
	if(HAL_TIM_PWM_DeInit(&handle)!=HAL_OK){
		return false;
	}
	instance_counter--;
	return true;
}

bool TimerBasicImplWithPWM::fetchData(BasicTimerWithPWM *basic_timer_w_pwm) {
	if(basic_timer_w_pwm == nullptr){
		return false;
	}
	if(TimerBasicImpl::fetchData(basic_timer_w_pwm)){
		return false;
	}
	setMasterConfig(basic_timer_w_pwm);
	setBreakTimeConfig(basic_timer_w_pwm);
	setConfig(basic_timer_w_pwm);
	setChannel(basic_timer_w_pwm);
	return true;
}

void TimerBasicImplWithPWM::setMasterConfig(BasicTimerWithPWM *basic_timer_w_pwm) {
	if(basic_timer_w_pwm == nullptr){
		return;
	}
	sMasterConfig = basic_timer_w_pwm->getMasterConfigTypeDef();
}

void TimerBasicImplWithPWM::setBreakTimeConfig(BasicTimerWithPWM *basic_timer_w_pwm) {
	if(basic_timer_w_pwm == nullptr){
		return;
	}
	sBreakDeadTimeConfig = basic_timer_w_pwm->getBreakAndDeadTimeTypeDef();
}

void TimerBasicImplWithPWM::setConfig(BasicTimerWithPWM *basic_timer_w_pwm) {
	if(basic_timer_w_pwm == nullptr){
		return;
	}
	sConfigOC = basic_timer_w_pwm->getCaptureCompareTypeDef();
}

void TimerBasicImplWithPWM::setChannel(BasicTimerWithPWM *basic_timer_w_pwm) {
	if(basic_timer_w_pwm == nullptr){
		return;
	}
	channel = basic_timer_w_pwm->getChannel();
}
