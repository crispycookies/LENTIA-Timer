//
// Created by TobiEgger on 26.02.2020.
//

#ifndef DRONE_IRQS_H
#define DRONE_IRQS_H

#include "IRQBasicImpl.h"
#include "IRQTimerBasicImpl.h"


class TIM15_IRQ : public IRQTimerBasicImpl{
protected:
	TIM15_IRQ() : IRQTimerBasicImpl(TIM15_IRQn){};
public:
	static inline TIM15_IRQ & getInstance(){
		static TIM15_IRQ irq_inst;
		return irq_inst;
	}
	~TIM15_IRQ() final= default;
};

class TIM16_IRQ : public IRQTimerBasicImpl{
protected:
	TIM16_IRQ() : IRQTimerBasicImpl(TIM16_IRQn){};
public:
	static inline TIM16_IRQ & getInstance(){
		static TIM16_IRQ irq_inst;
		return irq_inst;
	}
	~TIM16_IRQ() final= default;
};

class TIM17_IRQ : public IRQTimerBasicImpl{
protected:
	TIM17_IRQ() : IRQTimerBasicImpl(TIM17_IRQn){};
public:
	static inline TIM17_IRQ & getInstance(){
		static TIM17_IRQ irq_inst;
		return irq_inst;
	}
	~TIM17_IRQ() final= default;
};
class TIM19_IRQ : public IRQTimerBasicImpl{
protected:
	TIM19_IRQ() : IRQTimerBasicImpl(TIM19_IRQn){};
public:
	static inline TIM19_IRQ & getInstance(){
		static TIM19_IRQ irq_inst;
		return irq_inst;
	}
	~TIM19_IRQ() final= default;
};
class TIM12_IRQ : public IRQTimerBasicImpl{
protected:
	TIM12_IRQ() : IRQTimerBasicImpl(TIM12_IRQn){};
public:
	static inline TIM12_IRQ & getInstance(){
		static TIM12_IRQ irq_inst;
		return irq_inst;
	}
	~TIM12_IRQ() final= default;
};
class TIM13_IRQ : public IRQTimerBasicImpl{
protected:
	TIM13_IRQ() : IRQTimerBasicImpl(TIM13_IRQn){};
public:
	static inline TIM13_IRQ & getInstance(){
		static TIM13_IRQ irq_inst;
		return irq_inst;
	}
	~TIM13_IRQ() final= default;
};
class TIM14_IRQ : public IRQTimerBasicImpl{
protected:
	TIM14_IRQ() : IRQTimerBasicImpl(TIM14_IRQn){};
public:
	static inline TIM14_IRQ & getInstance(){
		static TIM14_IRQ irq_inst;
		return irq_inst;
	}
	~TIM14_IRQ() final= default;
};

extern "C"{
void TIM15_IRQHandler(){
	TIM15_IRQ * irq = &TIM15_IRQ::getInstance();
	if(irq == nullptr){
		__disable_irq();
		return;
	}
	if(irq->getRawHandle() == std::experimental::nullopt){
		//ERROR
		NVIC_DisableIRQ(irq->getIRQ());
	}
	__HAL_TIM_CLEAR_IT(&irq->getRawHandle().value(), irq->getIRQMask());
	irq->doAsRequested();
}

void TIM16_IRQHandler(){
	TIM16_IRQ * irq = &TIM16_IRQ::getInstance();
	if(irq == nullptr){
		__disable_irq();
		return;
	}
	if(irq->getRawHandle() == std::experimental::nullopt){
		//ERROR
		NVIC_DisableIRQ(irq->getIRQ());
	}
	__HAL_TIM_CLEAR_IT(&irq->getRawHandle().value(), irq->getIRQMask());
	irq->doAsRequested();
}

void TIM17_IRQHandler(){
	TIM17_IRQ * irq = &TIM17_IRQ::getInstance();
	if(irq == nullptr){
		__disable_irq();
		return;
	}
	if(irq->getRawHandle() == std::experimental::nullopt){
		//ERROR
		NVIC_DisableIRQ(irq->getIRQ());
	}
	__HAL_TIM_CLEAR_IT(&irq->getRawHandle().value(), irq->getIRQMask());
	irq->doAsRequested();
}
void TIM19_IRQHandler(){
	TIM19_IRQ * irq = &TIM19_IRQ::getInstance();
	if(irq == nullptr){
		__disable_irq();
		return;
	}
	if(irq->getRawHandle() == std::experimental::nullopt){
		//ERROR
		NVIC_DisableIRQ(irq->getIRQ());
	}
	__HAL_TIM_CLEAR_IT(&irq->getRawHandle().value(), irq->getIRQMask());
	irq->doAsRequested();
}
void TIM12_IRQHandler(){
	TIM12_IRQ * irq = &TIM12_IRQ::getInstance();
	if(irq == nullptr){
		__disable_irq();
		return;
	}
	if(irq->getRawHandle() == std::experimental::nullopt){
		//ERROR
		NVIC_DisableIRQ(irq->getIRQ());
	}
	__HAL_TIM_CLEAR_IT(&irq->getRawHandle().value(), irq->getIRQMask());
	irq->doAsRequested();
}
void TIM13_IRQHandler(){
	TIM13_IRQ * irq = &TIM13_IRQ::getInstance();
	if(irq == nullptr){
		__disable_irq();
		return;
	}
	if(irq->getRawHandle() == std::experimental::nullopt){
		//ERROR
		NVIC_DisableIRQ(irq->getIRQ());
	}
	__HAL_TIM_CLEAR_IT(&irq->getRawHandle().value(), irq->getIRQMask());
	irq->doAsRequested();
}
void TIM14_IRQHandler(){
	TIM14_IRQ * irq = &TIM14_IRQ::getInstance();
	if(irq == nullptr){
		__disable_irq();
		return;
	}
	if(irq->getRawHandle() == std::experimental::nullopt){
		//ERROR
		NVIC_DisableIRQ(irq->getIRQ());
	}
	__HAL_TIM_CLEAR_IT(&irq->getRawHandle().value(), irq->getIRQMask());
	irq->doAsRequested();
}
}
#endif //DRONE_IRQS_H
