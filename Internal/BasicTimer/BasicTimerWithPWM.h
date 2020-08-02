//
// Created by TobiEgger on 20.03.2020.
//

#ifndef DRONE_BASICTIMERWITHPWM_H
#define DRONE_BASICTIMERWITHPWM_H


#include "../Timer/Timer.h"
#include "BasicTimerBasicImpl.h"
#include <cstdint>

class BasicTimerWithPWM : public BasicTimerBasicImpl {
protected:
	BasicTimerWithPWM(Timer *_timer, SynchronizationObject *_sync, bool _is_irq = false) : BasicTimerBasicImpl(_timer,
																											   _sync,
																											   _is_irq) {};
public:
	explicit BasicTimerWithPWM(const BasicTimerWithPWM *timer_instance) : BasicTimerBasicImpl(timer_instance) {}

	~BasicTimerWithPWM() override = default;

	virtual bool isPWMRequested() = 0;

	virtual void setPWMEnable() = 0;

	virtual void setPWMDisable() = 0;

	virtual void setOutputCompareFastModeEnable() = 0;

	virtual void setOutputCompareFastModeDisable() = 0;

	virtual void setOutputCompareIdleStateSet() = 0;

	virtual void setOutputCompareIdleStateReset() = 0;

	virtual void setOutputCompareStateSet() = 0;

	virtual void setOutputCompareStateReset() = 0;

	virtual void setOutputComparePolarityHigh() = 0;

	virtual void setOutputComparePolarityLow() = 0;

	virtual void setOutputCompareNegativePolarityHigh() = 0;

	virtual void setOutputCompareNegativePolarityLow() = 0;

	virtual void setPWMMode1() = 0;

	virtual void setPWMMode2() = 0;

	virtual void setPWMModeInactive() = 0;

	virtual void setPWMModeActive() = 0;

	virtual void setOffStateRunModeEnable() = 0;

	virtual void setOffStateRunModeDisable() = 0;

	virtual void setOffStateRunModeIdleEnable() = 0;

	virtual void setOffStateRunModeIdleDisable() = 0;

	virtual void setLockLevelOff() = 0;

	virtual void setLockLevel1() = 0;

	virtual void setLockLevel2() = 0;

	virtual void setLockLevel3() = 0;

	virtual void setDeadTime(uint8_t value) = 0;

	virtual void setBreakStateEnable() = 0;

	virtual void setBreakStateDisable() = 0;

	virtual void setBreakPolarityHigh() = 0;

	virtual void setBreakPolarityLow() = 0;

	virtual void setAutomaticOutputModeEnable() = 0;

	virtual void setAutomaticOutputModeDisable() = 0;

	virtual void setBreakFilter0() = 0;

	virtual void setBreakFilter1() = 0;

	virtual void setBreakFilter2() = 0;

	virtual void setBreakFilter3() = 0;

	virtual void setBreakFilter4() = 0;

	virtual void setBreakFilter5() = 0;

	virtual void setBreakFilter6() = 0;

	virtual void setBreakFilter7() = 0;

	virtual void setBreakFilter8() = 0;

	virtual void setBreakFilter9() = 0;

	virtual void setBreakFilter10() = 0;

	virtual void setBreakFilter11() = 0;

	virtual void setBreakFilter12() = 0;

	virtual void setBreakFilter13() = 0;

	virtual void setBreakFilter14() = 0;

	virtual void setBreakFilter15() = 0;

	virtual void setOutputTriggerSet() = 0;

	virtual void setOutputTriggerReset() = 0;

	virtual void setOutputTriggerUpdate() = 0;

	virtual void setOutputTriggerOutputCompare1() = 0;

	virtual void setOutputTriggerOutputCompare1Ref() = 0;

	virtual void setOutputTriggerOutputCompare2Ref() = 0;

	virtual void setOutputTriggerOutputCompare3Ref() = 0;

	virtual void setOutputTriggerOutputCompare4Ref() = 0;

	virtual void setMasterSlaveEnable() = 0;

	virtual void setMasterSlaveDisable() = 0;

	virtual void setChannel0() = 0;

	virtual void setChannel1() = 0;

	virtual void setChannel2() = 0;

	virtual void setChannel3() = 0;

	virtual void setChannel4() = 0;

	virtual void setChannel5() = 0;

	virtual void setChannelAll() = 0;

	virtual void setChannelOverride(channel_t _channel) = 0;

	virtual TIM_OC_InitTypeDef getCaptureCompareTypeDef() = 0;

	virtual TIM_BreakDeadTimeConfigTypeDef getBreakAndDeadTimeTypeDef() = 0;

	virtual TIM_MasterConfigTypeDef getMasterConfigTypeDef() = 0;

	virtual channel_t getChannel() = 0;
};

#endif //DRONE_BASICTIMERWITHPWM_H
