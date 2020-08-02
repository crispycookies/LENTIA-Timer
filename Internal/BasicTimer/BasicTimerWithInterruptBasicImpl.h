//
// Created by TobiEgger on 23.02.2020.
//

#ifndef DRONE_BASICTIMERWITHINTERRUPTBASICIMPL_H
#define DRONE_BASICTIMERWITHINTERRUPTBASICIMPL_H


#include "BasicTimerBasicImpl.h"
#include "../Interrupts/IRQCallee.h"
#include "../Interrupts/IRQ.h"
#include "../Interrupts/IRQTimerBasicImpl.h"

class BasicTimerWithInterruptBasicImpl : public BasicTimerBasicImpl, public IRQCallee {
protected:
	IRQn_Type irq_n;
	IRQTimerBasicImpl * irq;
	BasicTimerWithInterruptBasicImpl(Timer * _timer, SynchronizationObject * _sync, IRQn_Type irq_n_, IRQTimerBasicImpl * irq_) : BasicTimerBasicImpl(_timer, _sync, true), irq_n(irq_n_), irq(irq_){
		if(irq_ == nullptr){
			return;
		}
		irq_->setTimer(_timer);
	};
public:
	~BasicTimerWithInterruptBasicImpl() override{
		if(irq == nullptr){
			return;
		}
		irq->unsetTimer();
	}
	virtual bool setIRQCallback(IRQ::callee_ptr_t callback);
	virtual bool enableIRQ();
	virtual bool disableIRQ();

	bool init() override;
	bool de_init() override;

	virtual bool init_without_irq();
	virtual bool de_init_without_irq();

	irqn_type_opt_t getIRQ() const override;
};


#endif //DRONE_BASICTIMERWITHINTERRUPTBASICIMPL_H
