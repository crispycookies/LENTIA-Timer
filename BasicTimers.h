//
// Created by TobiEgger on 21.02.2020.
//

#ifndef DRONE_BASICTIMERS_H
#define DRONE_BASICTIMERS_H

#include "Internal/BasicTimer/BasicTimerBasicImpl.h"
#include "Internal/Timer/Timers.h"
#include "Internal/Timer/TimerSynchronizationObjects.h"

#ifdef STM32F303xE
class TIM1_Basic: public BasicTimerBasicImpl{
protected:
	TIM1_Basic() : BasicTimerBasicImpl(&TIM1_RAW::getInstance(), &__SYNCH_TIM1::getInstance()){};
public:
	TIM1_Basic(const TIM1_Basic & timer_instance) : BasicTimerBasicImpl(&timer_instance) {

	};
	static inline TIM1_Basic & getInstance(){
		static TIM1_Basic pa;
		return pa;
	}
	~TIM1_Basic() final= default;
};
class TIM8_Basic: public BasicTimerBasicImpl{
protected:
	TIM8_Basic() : BasicTimerBasicImpl(&TIM8_RAW::getInstance(), &__SYNCH_TIM8::getInstance()){};
public:
	TIM8_Basic(const TIM8_Basic & timer_instance) : BasicTimerBasicImpl(&timer_instance) {

	};
	static inline TIM8_Basic & getInstance(){
		static TIM8_Basic pa;
		return pa;
	}
	~TIM8_Basic() final= default;
};
class TIM20_Basic: public BasicTimerBasicImpl{
protected:
	TIM20_Basic() : BasicTimerBasicImpl(&TIM20_RAW::getInstance(), &__SYNCH_TIM20::getInstance()){};
public:
	TIM20_Basic(const TIM20_Basic & timer_instance) : BasicTimerBasicImpl(&timer_instance) {

	};
	static inline TIM20_Basic & getInstance(){
		static TIM20_Basic pa;
		return pa;
	}
	~TIM20_Basic() final= default;
};
class TIM2_Basic: public BasicTimerBasicImpl{
protected:
	TIM2_Basic() : BasicTimerBasicImpl(&TIM2_RAW::getInstance(), &__SYNCH_TIM2::getInstance()){};
public:
	TIM2_Basic(const TIM2_Basic & timer_instance) : BasicTimerBasicImpl(&timer_instance) {

	};
	static inline TIM2_Basic & getInstance(){
		static TIM2_Basic pa;
		return pa;
	}
	~TIM2_Basic() final= default;
};
class TIM3_Basic: public BasicTimerBasicImpl{
protected:
	TIM3_Basic() : BasicTimerBasicImpl(&TIM3_RAW::getInstance(), &__SYNCH_TIM3::getInstance()){};
public:
	TIM3_Basic(const TIM3_Basic & timer_instance) : BasicTimerBasicImpl(&timer_instance) {

	};
	static inline TIM3_Basic & getInstance(){
		static TIM3_Basic pa;
		return pa;
	}
	~TIM3_Basic() final= default;
};
class TIM4_Basic: public BasicTimerBasicImpl{
protected:
	TIM4_Basic() : BasicTimerBasicImpl(&TIM4_RAW::getInstance(), &__SYNCH_TIM4::getInstance()){};
public:
	TIM4_Basic(const TIM4_Basic & timer_instance) : BasicTimerBasicImpl(&timer_instance) {

	};
	static inline TIM4_Basic & getInstance(){
		static TIM4_Basic pa;
		return pa;
	}
	~TIM4_Basic() final= default;
};
class TIM15_Basic: public BasicTimerBasicImpl{
protected:
	TIM15_Basic() : BasicTimerBasicImpl(&TIM15_RAW::getInstance(), &__SYNCH_TIM15::getInstance()){};
public:
	TIM15_Basic(const TIM15_Basic & timer_instance) : BasicTimerBasicImpl(&timer_instance) {

	};
	static inline TIM15_Basic & getInstance(){
		static TIM15_Basic pa;
		return pa;
	}
	~TIM15_Basic() final= default;
};
class TIM16_Basic: public BasicTimerBasicImpl{
protected:
	TIM16_Basic() : BasicTimerBasicImpl(&TIM16_RAW::getInstance(), &__SYNCH_TIM16::getInstance()){};
public:
	TIM16_Basic(const TIM16_Basic & timer_instance) : BasicTimerBasicImpl(&timer_instance) {

	};
	static inline TIM16_Basic & getInstance(){
		static TIM16_Basic pa;
		return pa;
	}
	~TIM16_Basic() final= default;
};
class TIM17_Basic: public BasicTimerBasicImpl{
protected:
	TIM17_Basic() : BasicTimerBasicImpl(&TIM17_RAW::getInstance(), &__SYNCH_TIM17::getInstance()){};
public:
	TIM17_Basic(const TIM17_Basic & timer_instance) : BasicTimerBasicImpl(&timer_instance) {

	};
	static inline TIM17_Basic & getInstance(){
		static TIM17_Basic pa;
		return pa;
	}
	~TIM17_Basic() final= default;
};
class TIM6_Basic: public BasicTimerBasicImpl{
protected:
	TIM6_Basic() : BasicTimerBasicImpl(&TIM6_RAW::getInstance(), &__SYNCH_TIM6::getInstance()){};
public:
	TIM6_Basic(const TIM6_Basic & timer_instance) : BasicTimerBasicImpl(&timer_instance) {

	};
	static inline TIM6_Basic & getInstance(){
		static TIM6_Basic pa;
		return pa;
	}
	~TIM6_Basic() final= default;
};
class TIM7_Basic: public BasicTimerBasicImpl{
protected:
	TIM7_Basic() : BasicTimerBasicImpl(&TIM7_RAW::getInstance(), &__SYNCH_TIM7::getInstance()){};
	TIM7_Basic(const TIM7_Basic & timer_instance) : BasicTimerBasicImpl(&timer_instance) {

	};
public:
	static inline TIM7_Basic & getInstance(){
		static TIM7_Basic pa;
		return pa;
	}
	~TIM7_Basic() final= default;
};
#endif

#endif //DRONE_BASICTIMERS_H
