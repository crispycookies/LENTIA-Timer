//
// Created by TobiEgger on 01.03.2020.
//

#ifndef DRONE_IRQTIMERBASICIMPL_H
#define DRONE_IRQTIMERBASICIMPL_H

#include "IRQBasicImpl.h"
#include "../Timer/Timer.h"

class IRQTimerBasicImpl : public IRQBasicImpl {
protected:
	typedef  std::experimental::optional<tim_handle_t> tim_handle_opt_t;
	Timer * timer = nullptr;
	explicit IRQTimerBasicImpl(IRQn_Type irq_n_) : IRQBasicImpl(irq_n_, TIM_SR_UIF){};
public:
	virtual bool setTimer(Timer * timer_);
	virtual bool unsetTimer();
	virtual tim_handle_opt_t getRawHandle();
	bool clearIRQ() override;
};


#endif //DRONE_IRQTIMERBASICIMPL_H
