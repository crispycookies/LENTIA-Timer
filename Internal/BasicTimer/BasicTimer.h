//
// Created by TobiEgger on 19.02.2020.
//

#ifndef DRONE_BASICTIMER_H
#define DRONE_BASICTIMER_H

#include "../../../../Common/LentiaBase/DeviceObject.h"
#include "../../../../Common/CPP/optional.h"
#include <cstdint>

class BasicTimer : public DeviceObject{
protected:
	BasicTimer()= default;
public:
	~BasicTimer() override = default;

	typedef uint32_t counter_t;
	typedef uint32_t prescaler_t;
	typedef uint32_t period_t;
	typedef uint32_t clockdiv_t;
	typedef uint32_t channel_t;
	typedef uint32_t counter_mode_t;
	typedef uint32_t auto_reload_t;
	typedef TIM_HandleTypeDef tim_handle_t;
	typedef std::experimental::optional<counter_t> counter_opt_t;
	typedef std::experimental::optional<tim_handle_t> tim_handle_opt_t;


	virtual void setCounterModeUp() = 0;
	virtual void setCounterModeDown() = 0;
	virtual void setCounterModeCenterAligned1() = 0;
	virtual void setCounterModeCenterAligned2() = 0;
	virtual void setCounterModeCenterAligned3() = 0;

	virtual void setClockDivision1() = 0;
	virtual void setClockDivision2() = 0;
	virtual void setClockDivision4() = 0;

	virtual void setCounterOffset(counter_t counter) = 0;
	virtual void setPeriod(counter_t period) = 0;

	virtual void setPrescaler(prescaler_t prescaler) = 0;

	virtual counter_opt_t getCounter() = 0;

	virtual void setEnableAutoReloadPreload() = 0;
	virtual void setDisableAutoReloadPreload() = 0;


	virtual bool isInterruptRequested() = 0;

	virtual bool init() = 0;
	virtual bool de_init() = 0;

	virtual tim_handle_opt_t getRawHandle() const= 0;
	virtual auto_reload_t getRawAutoReload() const= 0;
	virtual period_t getRawPeriod() const= 0;
	virtual clockdiv_t getRawClockDivider() const= 0;
	virtual prescaler_t getRawPrescaler() const= 0;
	virtual counter_t getRawRepetition() const = 0;
	virtual counter_mode_t getRawCounterMode() const = 0;
	virtual counter_t getRawCounterOffset() const = 0;
};

#endif //DRONE_BASICTIMER_H
