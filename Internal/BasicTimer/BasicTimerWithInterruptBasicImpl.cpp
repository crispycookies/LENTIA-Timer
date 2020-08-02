//
// Created by TobiEgger on 23.02.2020.
//

#include "BasicTimerWithInterruptBasicImpl.h"

bool BasicTimerWithInterruptBasicImpl::disableIRQ() {
	//The full procedure
	if(timer == nullptr || irq == nullptr || irq->getRawHandle() == std::experimental::nullopt){
		return false;
	}
	timer->stop(this);
	irq->clearIRQ();
	NVIC_DisableIRQ(irq_n);
	is_irq = false;
	timer->start(this);
	return true;
}

bool BasicTimerWithInterruptBasicImpl::enableIRQ() {
	//The full procedure
	if(timer == nullptr || irq == nullptr || irq->getRawHandle() == std::experimental::nullopt){
		return false;
	}
	timer->stop(this);
	is_irq = true;
	irq->clearIRQ();
	NVIC_EnableIRQ(irq_n);
	timer->start(this);
	return true;
}

IRQCallee::irqn_type_opt_t BasicTimerWithInterruptBasicImpl::getIRQ() const {
	if(irq == nullptr){
		return {};
	}
	return irq->getIRQ();
}

bool BasicTimerWithInterruptBasicImpl::setIRQCallback(IRQ::callee_ptr_t callback) {
	if(irq == nullptr){
		return false;
	}
	return irq->setIRQFun(this, callback);
}

bool BasicTimerWithInterruptBasicImpl::de_init() {
	return BasicTimerBasicImpl::de_init() && disableIRQ();
}

bool BasicTimerWithInterruptBasicImpl::init() {
	if(timer == nullptr || sync == nullptr || irq == nullptr){
		return false;
	}
	if(!sync->getResource(this)){
		return false;
	}
	timer->init(this);
	irq->clearIRQ();
	timer->start(this);
	return enableIRQ();
}

bool BasicTimerWithInterruptBasicImpl::init_without_irq() {
	return BasicTimerBasicImpl::init();
}

bool BasicTimerWithInterruptBasicImpl::de_init_without_irq() {
	return BasicTimerBasicImpl::de_init();
}
