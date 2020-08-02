//
// Created by TobiEgger on 19.02.2020.
//

#ifndef DRONE_TIMERBASICIMPL_H
#define DRONE_TIMERBASICIMPL_H


#include "Timer.h"
#include "../../../../Common/CPP/optional.h"

class TimerBasicImpl : public Timer{
public:
	typedef BasicTimer::counter_t counter_t;
	typedef BasicTimer::prescaler_t prescaler_t;
	typedef BasicTimer::period_t period_t;
	typedef BasicTimer::clockdiv_t clockdiv_t;
	typedef TIM_TypeDef * instance_t;

	typedef BasicTimer::counter_mode_t counter_mode_t;
	typedef BasicTimer::tim_handle_t tim_handle_t;
	typedef BasicTimer::counter_opt_t counter_opt_t;
protected:
	uint32_t instance_counter = 0;
	tim_handle_t handle = {};
	TIM_Base_InitTypeDef tim_base = {};
	instance_t instance;

	explicit TimerBasicImpl(instance_t instance_) : instance(instance_){};

	virtual void setPrescaler(prescaler_t prescaler);
	virtual void setPeriod(counter_t period);
	virtual void setARPreload(counter_t counter);
	virtual void setClockDivision(clockdiv_t clockdiv);
	virtual void setCounterOffset(counter_t offset);

	virtual bool init_irq_mode(BasicTimer * timer);
	virtual bool init_basic_mode(BasicTimer *basic_timer);

	virtual bool setStructure();
	virtual void resetAllValues();
	virtual void setRepetition(counter_t reload);
	virtual void setCounterMode(counter_mode_t mode);

	virtual bool fetchData(BasicTimer *basic_timer);
public:
	~TimerBasicImpl() override = default;

	counter_opt_t getCounter() override;
	tim_handle_t getRawHandle() const override;

	bool isInit() const override ;

	bool init(BasicTimer * basic_timer) override;
	bool de_init(BasicTimer * basic_timer) override;

	bool start(BasicTimer * basic_timer) override;
	bool stop(BasicTimer * basic_timer) override;

	bool enableClockOverride() override;
	bool disableClockOverride() override;
};


#endif //DRONE_TIMERBASICIMPL_H
