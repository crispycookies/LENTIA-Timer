//
// Created by TobiEgger on 15.03.2020.
//

#include "BasicTimerWithPWMBasicImpl.h"

bool BasicTimerWithPWMBasicImpl::isPWMRequested() {
	return is_pwm;
}

void BasicTimerWithPWMBasicImpl::setOutputCompareFastModeEnable() {
	sConfigOC.OCFastMode = TIM_OCFAST_ENABLE;
}

void BasicTimerWithPWMBasicImpl::setOutputCompareFastModeDisable() {
	sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
}

void BasicTimerWithPWMBasicImpl::setOutputCompareIdleStateSet() {
	sConfigOC.OCIdleState = TIM_OCIDLESTATE_SET;
}

void BasicTimerWithPWMBasicImpl::setOutputCompareIdleStateReset() {
	sConfigOC.OCIdleState = TIM_OCIDLESTATE_RESET;
}

void BasicTimerWithPWMBasicImpl::setOutputCompareStateSet() {
	sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_SET;
}

void BasicTimerWithPWMBasicImpl::setOutputCompareStateReset() {
	sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_RESET;
}

void BasicTimerWithPWMBasicImpl::setOutputComparePolarityHigh() {
	sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
}

void BasicTimerWithPWMBasicImpl::setOutputComparePolarityLow() {
	sConfigOC.OCPolarity = TIM_OCPOLARITY_LOW;
}

void BasicTimerWithPWMBasicImpl::setOutputCompareNegativePolarityHigh() {
	sConfigOC.OCNPolarity = TIM_OCNPOLARITY_HIGH;
}

void BasicTimerWithPWMBasicImpl::setOutputCompareNegativePolarityLow() {
	sConfigOC.OCNPolarity = TIM_OCNPOLARITY_LOW;
}

void BasicTimerWithPWMBasicImpl::setPWMMode1() {
	sConfigOC.OCMode = TIM_OCMODE_PWM1;
}

void BasicTimerWithPWMBasicImpl::setPWMMode2() {
	sConfigOC.OCMode = TIM_OCMODE_PWM2;
}

void BasicTimerWithPWMBasicImpl::setPWMModeInactive() {
	sConfigOC.OCMode = TIM_OCMODE_INACTIVE;
}

void BasicTimerWithPWMBasicImpl::setPWMModeActive() {
	sConfigOC.OCMode = TIM_OCMODE_ACTIVE;
}

void BasicTimerWithPWMBasicImpl::setOffStateRunModeEnable() {
	sBreakDeadTimeConfig.OffStateRunMode = TIM_OSSR_ENABLE;
}

void BasicTimerWithPWMBasicImpl::setOffStateRunModeDisable() {
	sBreakDeadTimeConfig.OffStateRunMode = TIM_OSSR_DISABLE;
}

void BasicTimerWithPWMBasicImpl::setOffStateRunModeIdleEnable() {
	sBreakDeadTimeConfig.OffStateIDLEMode = TIM_OSSI_ENABLE;
}

void BasicTimerWithPWMBasicImpl::setOffStateRunModeIdleDisable() {
	sBreakDeadTimeConfig.OffStateIDLEMode = TIM_OSSI_DISABLE;
}

void BasicTimerWithPWMBasicImpl::setLockLevelOff() {
	sBreakDeadTimeConfig.LockLevel = TIM_LOCKLEVEL_OFF;
}

void BasicTimerWithPWMBasicImpl::setLockLevel1() {
	sBreakDeadTimeConfig.LockLevel = TIM_LOCKLEVEL_1;
}

void BasicTimerWithPWMBasicImpl::setLockLevel2() {
	sBreakDeadTimeConfig.LockLevel = TIM_LOCKLEVEL_2;
}

void BasicTimerWithPWMBasicImpl::setLockLevel3() {
	sBreakDeadTimeConfig.LockLevel = TIM_LOCKLEVEL_3;
}

void BasicTimerWithPWMBasicImpl::setDeadTime(uint8_t value) {
	sBreakDeadTimeConfig.DeadTime = value;
}

void BasicTimerWithPWMBasicImpl::setBreakStateEnable() {
	sBreakDeadTimeConfig.BreakState = TIM_BREAK_ENABLE;
}

void BasicTimerWithPWMBasicImpl::setBreakStateDisable() {
	sBreakDeadTimeConfig.BreakState = TIM_BREAK_DISABLE;
}

void BasicTimerWithPWMBasicImpl::setBreakPolarityHigh() {
	sBreakDeadTimeConfig.BreakPolarity = TIM_BREAKPOLARITY_HIGH;
}

void BasicTimerWithPWMBasicImpl::setBreakPolarityLow() {
	sBreakDeadTimeConfig.BreakPolarity = TIM_BREAKPOLARITY_LOW;
}

void BasicTimerWithPWMBasicImpl::setAutomaticOutputModeEnable() {
	sBreakDeadTimeConfig.AutomaticOutput = TIM_AUTOMATICOUTPUT_ENABLE;
}

void BasicTimerWithPWMBasicImpl::setAutomaticOutputModeDisable() {
	sBreakDeadTimeConfig.AutomaticOutput = TIM_AUTOMATICOUTPUT_DISABLE;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter0() {
	sBreakDeadTimeConfig.BreakFilter = 0;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter1() {
	sBreakDeadTimeConfig.BreakFilter = 1;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter2() {
	sBreakDeadTimeConfig.BreakFilter = 2;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter3() {
	sBreakDeadTimeConfig.BreakFilter = 3;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter4() {
	sBreakDeadTimeConfig.BreakFilter = 4;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter5() {
	sBreakDeadTimeConfig.BreakFilter = 5;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter6() {
	sBreakDeadTimeConfig.BreakFilter = 6;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter7() {
	sBreakDeadTimeConfig.BreakFilter = 7;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter8() {
	sBreakDeadTimeConfig.BreakFilter = 8;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter9() {
	sBreakDeadTimeConfig.BreakFilter = 9;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter10() {
	sBreakDeadTimeConfig.BreakFilter = 10;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter11() {
	sBreakDeadTimeConfig.BreakFilter = 11;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter12() {
	sBreakDeadTimeConfig.BreakFilter = 12;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter13() {
	sBreakDeadTimeConfig.BreakFilter = 13;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter14() {
	sBreakDeadTimeConfig.BreakFilter = 14;
}

void BasicTimerWithPWMBasicImpl::setBreakFilter15() {
	sBreakDeadTimeConfig.BreakFilter = 15;
}

void BasicTimerWithPWMBasicImpl::setOutputTriggerSet() {
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_ENABLE;
}

void BasicTimerWithPWMBasicImpl::setOutputTriggerReset() {
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
}

void BasicTimerWithPWMBasicImpl::setOutputTriggerUpdate() {
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_UPDATE;
}

void BasicTimerWithPWMBasicImpl::setOutputTriggerOutputCompare1() {
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_OC1;
}

void BasicTimerWithPWMBasicImpl::setOutputTriggerOutputCompare1Ref() {
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_OC1REF;
}

void BasicTimerWithPWMBasicImpl::setOutputTriggerOutputCompare2Ref() {
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_OC2REF;
}

void BasicTimerWithPWMBasicImpl::setOutputTriggerOutputCompare3Ref() {
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_OC3REF;
}

void BasicTimerWithPWMBasicImpl::setOutputTriggerOutputCompare4Ref() {
	sMasterConfig.MasterOutputTrigger = TIM_TRGO_OC4REF;
}

void BasicTimerWithPWMBasicImpl::setMasterSlaveEnable() {
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_ENABLE;
}

void BasicTimerWithPWMBasicImpl::setMasterSlaveDisable() {
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
}

TIM_OC_InitTypeDef BasicTimerWithPWMBasicImpl::getCaptureCompareTypeDef() {
	return sConfigOC;
}

TIM_BreakDeadTimeConfigTypeDef BasicTimerWithPWMBasicImpl::getBreakAndDeadTimeTypeDef() {
	return sBreakDeadTimeConfig;
}

TIM_MasterConfigTypeDef BasicTimerWithPWMBasicImpl::getMasterConfigTypeDef() {
	return sMasterConfig;
}

void BasicTimerWithPWMBasicImpl::resetAllThis() {
	reset();
	BasicTimerBasicImpl::resetAllThis();
}

void BasicTimerWithPWMBasicImpl::setPWMEnable() {
	is_pwm = true;
}

void BasicTimerWithPWMBasicImpl::setPWMDisable() {
	is_pwm = false;
}

void BasicTimerWithPWMBasicImpl::reset() {
	sConfigOC.OCMode = TIM_OCMODE_PWM1;
	sConfigOC.Pulse = 0;
	sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
	sConfigOC.OCNPolarity = TIM_OCNPOLARITY_LOW;
	sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
	sConfigOC.OCIdleState = TIM_OCIDLESTATE_RESET;
	sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_RESET;

	sBreakDeadTimeConfig.OffStateRunMode = TIM_OSSR_DISABLE;
	sBreakDeadTimeConfig.OffStateIDLEMode = TIM_OSSI_DISABLE;
	sBreakDeadTimeConfig.LockLevel = TIM_LOCKLEVEL_OFF;
	sBreakDeadTimeConfig.DeadTime = 0;
	sBreakDeadTimeConfig.BreakState = TIM_BREAK_DISABLE;
	sBreakDeadTimeConfig.BreakPolarity = TIM_BREAKPOLARITY_HIGH;
	sBreakDeadTimeConfig.AutomaticOutput = TIM_AUTOMATICOUTPUT_DISABLE;

	sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
	sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
}

void BasicTimerWithPWMBasicImpl::setChannel0() {
	channel = TIM_CHANNEL_1;
}

void BasicTimerWithPWMBasicImpl::setChannel1() {
	channel = TIM_CHANNEL_2;
}

void BasicTimerWithPWMBasicImpl::setChannel2() {
	channel = TIM_CHANNEL_3;
}

void BasicTimerWithPWMBasicImpl::setChannel3() {
	channel = TIM_CHANNEL_4;
}

void BasicTimerWithPWMBasicImpl::setChannel4() {
	channel = TIM_CHANNEL_5;
}

void BasicTimerWithPWMBasicImpl::setChannel5() {
	channel = TIM_CHANNEL_6;
}

void BasicTimerWithPWMBasicImpl::setChannelAll() {
	channel = TIM_CHANNEL_ALL;
}

void BasicTimerWithPWMBasicImpl::setChannelOverride(BasicTimerWithPWMBasicImpl::channel_t _channel) {
	channel = _channel;
}

BasicTimerWithPWMBasicImpl::channel_t BasicTimerWithPWMBasicImpl::getChannel() {
	return channel;
}

bool BasicTimerWithPWMBasicImpl::init() {
	if(timer == nullptr || sync == nullptr){
		return false;
	}
	if(!sync->getResource(this)){
		return false;
	}
	timer->init(this);
	timer->start(this);
	return true;
}

bool BasicTimerWithPWMBasicImpl::de_init() {
	if (timer == nullptr || sync == nullptr) {
		return false;
	}
	if (!sync->releaseResource(this)) {
		return false;
	}
	timer->stop(this);
	timer->de_init(this);
	return true;
}
