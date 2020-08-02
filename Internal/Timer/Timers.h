//
// Created by TobiEgger on 21.02.2020.
//

#ifndef DRONE_TIMERS_H
#define DRONE_TIMERS_H

#include "TimerBasicImpl.h"

#ifdef STM32F303xE

class TIM1_RAW : public TimerBasicImpl{
protected:
	TIM1_RAW() : TimerBasicImpl(TIM1) {};
public:
	static inline TIM1_RAW & getInstance(){
		static TIM1_RAW tim;
		return tim;
	}
	~TIM1_RAW() final= default;

	inline bool enableClockOverride() override {
		__HAL_RCC_TIM1_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override{
		__HAL_RCC_TIM1_CLK_DISABLE();
		return true;
	}
};
class TIM2_RAW : public TimerBasicImpl{
protected:
	TIM2_RAW() : TimerBasicImpl(TIM2) {};
public:
	static inline TIM2_RAW & getInstance(){
		static TIM2_RAW tim;
		return tim;
	}
	~TIM2_RAW() final= default;

	inline bool enableClockOverride() override {
		__HAL_RCC_TIM2_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override{
		__HAL_RCC_TIM2_CLK_DISABLE();
		return true;
	}
};
class TIM8_RAW : public TimerBasicImpl{
protected:
	TIM8_RAW() : TimerBasicImpl(TIM8) {};
public:
	static inline TIM8_RAW & getInstance(){
		static TIM8_RAW tim;
		return tim;
	}
	~TIM8_RAW() final= default;

	inline bool enableClockOverride() override {
		__HAL_RCC_TIM8_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override{
		__HAL_RCC_TIM8_CLK_DISABLE();
		return true;
	}
};
class TIM20_RAW : public TimerBasicImpl{
protected:
	TIM20_RAW() : TimerBasicImpl(TIM20) {};
public:
	static inline TIM20_RAW & getInstance(){
		static TIM20_RAW tim;
		return tim;
	}
	~TIM20_RAW() final= default;

	inline bool enableClockOverride() override {
		__HAL_RCC_TIM20_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override{
		__HAL_RCC_TIM20_CLK_DISABLE();
		return true;
	}
};
class TIM3_RAW : public TimerBasicImpl{
protected:
	TIM3_RAW() : TimerBasicImpl(TIM3) {};
public:
	static inline TIM3_RAW & getInstance(){
		static TIM3_RAW tim;
		return tim;
	}
	~TIM3_RAW() final= default;

	inline bool enableClockOverride() override {
		__HAL_RCC_TIM3_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override{
		__HAL_RCC_TIM3_CLK_DISABLE();
		return true;
	}
};
class TIM4_RAW : public TimerBasicImpl{
protected:
	TIM4_RAW() : TimerBasicImpl(TIM4) {};
public:
	static inline TIM4_RAW & getInstance(){
		static TIM4_RAW tim;
		return tim;
	}
	~TIM4_RAW() final= default;

	inline bool enableClockOverride() override {
		__HAL_RCC_TIM4_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override{
		__HAL_RCC_TIM4_CLK_DISABLE();
		return true;
	}
};
class TIM15_RAW : public TimerBasicImpl{
protected:
	TIM15_RAW() : TimerBasicImpl(TIM15) {};
public:
	static inline TIM15_RAW & getInstance(){
		static TIM15_RAW tim;
		return tim;
	}
	~TIM15_RAW() final= default;

	inline bool enableClockOverride() override {
		__HAL_RCC_TIM15_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override{
		__HAL_RCC_TIM15_CLK_DISABLE();
		return true;
	}
};
class TIM16_RAW : public TimerBasicImpl{
protected:
	TIM16_RAW() : TimerBasicImpl(TIM16) {};
public:
	static inline TIM16_RAW & getInstance(){
		static TIM16_RAW tim;
		return tim;
	}
	~TIM16_RAW() final= default;

	inline bool enableClockOverride() override {
		__HAL_RCC_TIM16_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override{
		__HAL_RCC_TIM16_CLK_DISABLE();
		return true;
	}
};
class TIM17_RAW : public TimerBasicImpl{
protected:
	TIM17_RAW() : TimerBasicImpl(TIM17) {};
public:
	static inline TIM17_RAW & getInstance(){
		static TIM17_RAW tim;
		return tim;
	}
	~TIM17_RAW() final= default;

	inline bool enableClockOverride() override {
		__HAL_RCC_TIM17_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override{
		__HAL_RCC_TIM17_CLK_DISABLE();
		return true;
	}
};
class TIM7_RAW : public TimerBasicImpl{
protected:
	TIM7_RAW() : TimerBasicImpl(TIM7) {};
public:
	static inline TIM7_RAW & getInstance(){
		static TIM7_RAW tim;
		return tim;
	}
	~TIM7_RAW() final= default;

	inline bool enableClockOverride() override {
		__HAL_RCC_TIM7_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override{
		__HAL_RCC_TIM7_CLK_DISABLE();
		return true;
	}
};
class TIM6_RAW : public TimerBasicImpl{
protected:
	TIM6_RAW() : TimerBasicImpl(TIM6) {};
public:
	static inline TIM6_RAW & getInstance(){
		static TIM6_RAW tim;
		return tim;
	}
	~TIM6_RAW() final= default;

	inline bool enableClockOverride() override {
		__HAL_RCC_TIM6_CLK_ENABLE();
		return true;
	}

	inline bool disableClockOverride() override{
		__HAL_RCC_TIM6_CLK_DISABLE();
		return true;
	}
};
#endif

#endif //DRONE_TIMERS_H
