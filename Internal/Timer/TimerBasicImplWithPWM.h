//
// Created by TobiEgger on 15.03.2020.
//

#ifndef DRONE_TIMERBASICIMPLWITHPWM_H
#define DRONE_TIMERBASICIMPLWITHPWM_H

#include "TimerBasicImpl.h"
#include "../BasicTimer/BasicTimerWithPWM.h"

class TimerBasicImplWithPWM : public TimerBasicImpl {
protected:
	explicit TimerBasicImplWithPWM(instance_t instance_) : TimerBasicImpl(instance_){};
	TIM_OC_InitTypeDef sConfigOC = {};
	TIM_BreakDeadTimeConfigTypeDef sBreakDeadTimeConfig = {};
	TIM_MasterConfigTypeDef sMasterConfig = {};
	channel_t channel = {};
public:
	virtual bool fetchData(BasicTimerWithPWM * basic_timer_w_pwm);

	virtual bool init(BasicTimerWithPWM * basic_timer_w_pwm);
	virtual bool de_init(BasicTimerWithPWM * basic_timer_w_pwm);

	virtual bool start(BasicTimerWithPWM * basic_timer_w_pwm);
	virtual bool stop(BasicTimerWithPWM * basic_timer_w_pwm);

	bool pwm_init(BasicTimerWithPWM *basic_timer_w_pwm);

	bool pwm_de_init(BasicTimerWithPWM *basic_timer_w_pwm);

	void setMasterConfig(BasicTimerWithPWM *basic_timer_w_pwm);

	void setBreakTimeConfig(BasicTimerWithPWM *basic_timer_w_pwm);

	void setConfig(BasicTimerWithPWM *basic_timer_w_pwm);

	void setChannel(BasicTimerWithPWM *basic_timer_w_pwm);
};


#endif //DRONE_TIMERBASICIMPLWITHPWM_H
