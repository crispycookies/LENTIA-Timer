//
// Created by TobiEgger on 01.03.2020.
//

#ifndef DRONE_TIMERWITHINTERRUPTS_H
#define DRONE_TIMERWITHINTERRUPTS_H

#include "Internal/BasicTimer/BasicTimerWithInterruptBasicImpl.h"
#include "Internal/Interrupts/IRQs.h"
#include "Internal/Timer/Timers.h"
#include "Internal/Timer/TimerSynchronizationObjects.h"

class TIM15_WithInterrupt : public BasicTimerWithInterruptBasicImpl{
protected:
	TIM15_WithInterrupt() : BasicTimerWithInterruptBasicImpl(&TIM15_RAW::getInstance(), &__SYNCH_TIM15::getInstance(),TIM15_IRQn,
	&TIM15_IRQ::getInstance()) {};
public:
	static inline TIM15_WithInterrupt & getInstance(){
		static TIM15_WithInterrupt tim;
		return tim;
	}
	~TIM15_WithInterrupt() final= default;
};
class TIM16_WithInterrupt : public BasicTimerWithInterruptBasicImpl{
protected:
	TIM16_WithInterrupt() : BasicTimerWithInterruptBasicImpl(&TIM16_RAW::getInstance(), &__SYNCH_TIM16::getInstance(),TIM16_IRQn,
															 &TIM16_IRQ::getInstance()) {};
public:
	static inline TIM16_WithInterrupt & getInstance(){
		static TIM16_WithInterrupt tim;
		return tim;
	}
	~TIM16_WithInterrupt() final= default;
};
class TIM17_WithInterrupt : public BasicTimerWithInterruptBasicImpl{
protected:
	TIM17_WithInterrupt() : BasicTimerWithInterruptBasicImpl(&TIM17_RAW::getInstance(), &__SYNCH_TIM17::getInstance(),TIM17_IRQn,
															 &TIM17_IRQ::getInstance()) {};
public:
	static inline TIM17_WithInterrupt & getInstance(){
		static TIM17_WithInterrupt tim;
		return tim;
	}
	~TIM17_WithInterrupt() final= default;
};


#endif //DRONE_TIMERWITHINTERRUPTS_H
