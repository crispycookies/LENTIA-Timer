//
// Created by TobiEgger on 19.02.2020.
//

#ifndef DRONE_BASICTIMERBASICIMPL_H
#define DRONE_BASICTIMERBASICIMPL_H


#include "BasicTimer.h"
#include "../Timer/Timer.h"
#include "../../../../Common/LentiaBase/SynchronizationObject.h"

class BasicTimerBasicImpl : public BasicTimer {
public:
	typedef BasicTimer::tim_handle_t tim_handle_t;
	typedef BasicTimer::tim_handle_opt_t tim_handle_opt_t;
protected:
	Timer *timer;
	SynchronizationObject *sync;

	bool is_irq;

	explicit BasicTimerBasicImpl(Timer *_timer, SynchronizationObject *_sync, bool _is_irq = false) :
			timer(_timer), sync(_sync), is_irq(_is_irq) {};

	static const counter_t _reset__counter = 0;
	const prescaler_t _reset_prescaler = SystemCoreClock / 1000; //ms
	static const period_t _reset_period = 0;
	static const clockdiv_t _reset_clockdiv = TIM_CLOCKDIVISION_DIV1;
	static const counter_mode_t _reset_mode = TIM_COUNTERMODE_UP;
	static const auto_reload_t _reset_reload = 0;
	static const counter_t _reset_repetition = 0;


	counter_t _counter = _reset__counter;
	prescaler_t _prescaler = _reset_prescaler;
	period_t _period = _reset_period;
	clockdiv_t _clockdiv = _reset_clockdiv;
	counter_mode_t _mode = _reset_mode;
	auto_reload_t _reload = _reset_reload;
	counter_t _repetition = _reset_repetition;
private:
	void reset();
public:
	~BasicTimerBasicImpl() override = default;

	explicit BasicTimerBasicImpl(const BasicTimerBasicImpl *timer_instance) {
		if (timer_instance == nullptr) {
			return;
		}
		timer = timer_instance->timer;
		sync = timer_instance->sync;
		is_irq = timer_instance->is_irq;

		resetAllThis();
	}

	void setCounterModeUp() override;

	void setCounterModeDown() override;

	void setCounterModeCenterAligned1() override;

	void setCounterModeCenterAligned2() override;

	void setCounterModeCenterAligned3() override;

	void setClockDivision1() override;

	void setClockDivision2() override;

	void setClockDivision4() override;

	void setCounterOffset(counter_t counter) override;

	void setPeriod(counter_t period) override;

	void setEnableAutoReloadPreload() override;

	void setDisableAutoReloadPreload() override;

	bool isInterruptRequested() override;

	void setPrescaler(prescaler_t prescaler) override;

	bool init() override;

	bool de_init() override;

	counter_opt_t getCounter() override;

	tim_handle_opt_t getRawHandle() const override;

	auto_reload_t getRawAutoReload() const override;

	period_t getRawPeriod() const override;

	clockdiv_t getRawClockDivider() const override;

	prescaler_t getRawPrescaler() const override;

	counter_t getRawRepetition() const override;

	counter_t getRawCounterOffset() const override;

	counter_mode_t getRawCounterMode() const override;

	virtual void resetAllThis();
};


#endif //DRONE_BASICTIMERBASICIMPL_H
