//
// Created by TobiEgger on 19.02.2020.
//
#ifdef STM32F303xE
#include <stm32f3xx.h>
#endif
#include "TimerBasicImpl.h"

bool TimerBasicImpl::init(BasicTimer *basic_timer) {
	if(basic_timer == nullptr){
		return false;
	}
	if(basic_timer->isInterruptRequested()){
		return init_irq_mode(basic_timer);
	}
	return init_basic_mode(basic_timer);
}

bool TimerBasicImpl::de_init(BasicTimer *basic_timer) {
	stop(basic_timer);
	resetAllValues();
	//TODO
	return false;
}

bool TimerBasicImpl::init_irq_mode(BasicTimer *basic_timer) {
	return init_basic_mode(basic_timer);
}

bool TimerBasicImpl::init_basic_mode(BasicTimer *basic_timer) {
	if(basic_timer == nullptr){
		return false;
	}
	if(!fetchData(basic_timer)){
		return false;
	}
	//Initialized
	HAL_TIM_Base_Init(&handle);
	instance_counter++;

	return true;
}

TimerBasicImpl::counter_opt_t TimerBasicImpl::getCounter() {
	if(!instance_counter){
		return {};
	}
	auto  ret_val = __HAL_TIM_GET_COUNTER(&handle);
	return ret_val;
}

void TimerBasicImpl::setPrescaler(TimerBasicImpl::prescaler_t prescaler) {
	tim_base.Prescaler = prescaler;
}

void TimerBasicImpl::setPeriod(TimerBasicImpl::counter_t period) {
	tim_base.Period = period;
}

void TimerBasicImpl::setClockDivision(TimerBasicImpl::clockdiv_t clockdiv) {
	tim_base.ClockDivision = clockdiv;
}

bool TimerBasicImpl::setStructure() {
	if(instance == nullptr){
		return false;
	}
	handle.Init = tim_base;
	handle.Instance = instance;
	return true;
}

bool TimerBasicImpl::stop(BasicTimer *basic_timer) {
	if(basic_timer == nullptr){
		return false;
	}
	if(!isInit()){
		init(basic_timer);
	}

	if(basic_timer->isInterruptRequested()){
		return HAL_TIM_Base_Stop_IT(&handle) == HAL_OK;
	}else{
		return HAL_TIM_Base_Stop(&handle) == HAL_OK;
	}
}

bool TimerBasicImpl::start(BasicTimer *basic_timer) {
	if(basic_timer == nullptr){
		return false;
	}
	if(!isInit()){
		init(basic_timer);
	}

	if(basic_timer->isInterruptRequested()){
		return HAL_TIM_Base_Start_IT(&handle) == HAL_OK;
	}else{
		return HAL_TIM_Base_Start(&handle) == HAL_OK;
	}
}

bool TimerBasicImpl::enableClockOverride() {
	return false;
}

bool TimerBasicImpl::disableClockOverride() {
	return false;
}

void TimerBasicImpl::resetAllValues() {
	setRepetition(0);
	setARPreload(0);
	setPeriod(0);
	setClockDivision(0);
	setPrescaler(0);
	setCounterMode(0);
	setStructure();
}

void TimerBasicImpl::setARPreload(TimerBasicImpl::counter_t counter) {
	tim_base.AutoReloadPreload = counter;
}

void TimerBasicImpl::setRepetition(TimerBasicImpl::counter_t reload) {
	tim_base.RepetitionCounter = reload;
}

void TimerBasicImpl::setCounterMode(TimerBasicImpl::counter_mode_t mode) {
	tim_base.CounterMode = mode;
}

TimerBasicImpl::tim_handle_t TimerBasicImpl::getRawHandle() const {
	return handle;
}

bool TimerBasicImpl::fetchData(BasicTimer *basic_timer) {
	if(basic_timer == nullptr){
		return false;
	}
	if(!instance_counter){
		//Enable Clock
		enableClockOverride();
	}

	setRepetition(basic_timer->getRawRepetition());
	setARPreload(basic_timer->getRawAutoReload());
	setPeriod(basic_timer->getRawPeriod());
	setClockDivision(basic_timer->getRawClockDivider());
	setPrescaler(basic_timer->getRawPrescaler());
	setCounterMode(basic_timer->getRawCounterMode());
	setCounterOffset(basic_timer->getRawCounterOffset());

	return setStructure();
}

void TimerBasicImpl::setCounterOffset(TimerBasicImpl::counter_t offset) {
	//TODO Implement if even required
}

bool TimerBasicImpl::isInit() const {
	return instance_counter > 0;
}

