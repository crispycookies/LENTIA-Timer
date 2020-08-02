//
// Created by TobiEgger on 15.03.2020.
//

#ifndef DRONE_BASICTIMERWITHPWMBASICIMPL_H
#define DRONE_BASICTIMERWITHPWMBASICIMPL_H


#include "../Timer/TimerSynchronizationObjects.h"
#include "BasicTimerWithPWM.h"
#include "../Timer/TimerBasicImplWithPWM.h"

class BasicTimerWithPWMBasicImpl : public BasicTimerWithPWM {
protected:
	TIM_OC_InitTypeDef sConfigOC = {};
	TIM_BreakDeadTimeConfigTypeDef sBreakDeadTimeConfig = {};
	TIM_MasterConfigTypeDef sMasterConfig = {};

	bool is_pwm = {};
	channel_t channel = {};

	TimerBasicImplWithPWM * timer = {};

	BasicTimerWithPWMBasicImpl(TimerBasicImplWithPWM *_timer, SynchronizationObject *_sync, bool _is_irq = false, bool _is_pwm = true,
							   channel_t _channel = TIM_CHANNEL_ALL)
			: BasicTimerWithPWM(_timer, _sync, _is_irq), timer(_timer),is_pwm(_is_pwm), channel(_channel) { reset(); };

	void reset();

public:

	explicit BasicTimerWithPWMBasicImpl(const BasicTimerWithPWMBasicImpl *timer_instance) : BasicTimerWithPWM(
			timer_instance) {
		sConfigOC = timer_instance->sConfigOC;
		sMasterConfig = timer_instance->sMasterConfig;
		sBreakDeadTimeConfig = timer_instance->sBreakDeadTimeConfig;
		is_pwm = timer_instance->is_pwm;
		timer = timer_instance->timer;
	}

	bool isPWMRequested() override;

	void setPWMEnable() override;

	void setPWMDisable() override;

	void setOutputCompareFastModeEnable() override;

	void setOutputCompareFastModeDisable() override;

	void setOutputCompareIdleStateSet() override;

	void setOutputCompareIdleStateReset() override;

	void setOutputCompareStateSet() override;

	void setOutputCompareStateReset() override;

	void setOutputComparePolarityHigh() override;

	void setOutputComparePolarityLow() override;

	void setOutputCompareNegativePolarityHigh() override;

	void setOutputCompareNegativePolarityLow()  override;

	void setPWMMode1()  override;

	void setPWMMode2() override;

	void setPWMModeInactive() override;

	void setPWMModeActive() override;

	void setOffStateRunModeEnable() override;

	void setOffStateRunModeDisable() override;

	void setOffStateRunModeIdleEnable() override;

	void setOffStateRunModeIdleDisable() override;

	void setLockLevelOff() override;

	void setLockLevel1() override;

	void setLockLevel2() override;

	void setLockLevel3() override;

	void setDeadTime(uint8_t value) override;

	void setBreakStateEnable() override;

	void setBreakStateDisable() override;

	void setBreakPolarityHigh() override;

	void setBreakPolarityLow() override;

	void setAutomaticOutputModeEnable() override;

	void setAutomaticOutputModeDisable() override;

	void setBreakFilter0() override;

	void setBreakFilter1() override;

	void setBreakFilter2() override;

	void setBreakFilter3() override;

	void setBreakFilter4() override;

	void setBreakFilter5() override;

	void setBreakFilter6() override;

	void setBreakFilter7() override;

	void setBreakFilter8() override;

	void setBreakFilter9() override;

	void setBreakFilter10() override;

	void setBreakFilter11() override;

	void setBreakFilter12() override;

	void setBreakFilter13() override;

	void setBreakFilter14() override;

	void setBreakFilter15() override;

	void setOutputTriggerSet() override;

	void setOutputTriggerReset() override;

	void setOutputTriggerUpdate() override;

	void setOutputTriggerOutputCompare1() override;

	void setOutputTriggerOutputCompare1Ref() override;

	void setOutputTriggerOutputCompare2Ref() override;

	void setOutputTriggerOutputCompare3Ref() override;

	void setOutputTriggerOutputCompare4Ref() override;

	void setMasterSlaveEnable() override;

	void setMasterSlaveDisable() override;

	void setChannel0() override;

	void setChannel1() override;

	void setChannel2() override;

	void setChannel3() override;

	void setChannel4() override;

	void setChannel5() override;

	void setChannelAll() override;

	void setChannelOverride(channel_t _channel) override;

	void resetAllThis() override;

	TIM_OC_InitTypeDef getCaptureCompareTypeDef() override;

	TIM_BreakDeadTimeConfigTypeDef getBreakAndDeadTimeTypeDef() override;

	TIM_MasterConfigTypeDef getMasterConfigTypeDef() override;

	channel_t getChannel() override;

	bool init()  override;

	bool de_init() override;
};


#endif //DRONE_BASICTIMERWITHPWMBASICIMPL_H
