//
// Created by TobiEgger on 19.02.2020.
//

#ifndef DRONE_TIMER_H
#define DRONE_TIMER_H

#include "../../../../Common/LentiaBase/Object.h"
#include "../BasicTimer/BasicTimer.h"

typedef BasicTimer::counter_t counter_t;
typedef BasicTimer::prescaler_t prescaler_t;
typedef BasicTimer::period_t period_t;
typedef BasicTimer::clockdiv_t clockdiv_t;
typedef BasicTimer::channel_t channel_t;
typedef BasicTimer::counter_mode_t counter_mode_t;
typedef BasicTimer::auto_reload_t auto_reload_t;
typedef BasicTimer::counter_opt_t counter_opt_t;
typedef BasicTimer::tim_handle_t tim_handle_t;

class Timer : public Object{
protected:
	Timer() = default;

public:
	~Timer() override = default;

	virtual bool init(BasicTimer * basic_timer) = 0;
	virtual bool de_init(BasicTimer * basic_timer) = 0;

	virtual bool start(BasicTimer * basic_timer) = 0;
	virtual bool stop(BasicTimer * basic_timer) = 0;

	virtual counter_opt_t getCounter() = 0;

	virtual bool enableClockOverride() = 0;
	virtual bool disableClockOverride() = 0;

	virtual tim_handle_t getRawHandle() const = 0;
	virtual bool isInit() const = 0;
};

#endif //DRONE_TIMER_H
