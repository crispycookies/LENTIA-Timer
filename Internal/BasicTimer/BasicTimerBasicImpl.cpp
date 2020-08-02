//
// Created by TobiEgger on 19.02.2020.
//

#include "BasicTimerBasicImpl.h"
#include <stm32f3xx.h>

void BasicTimerBasicImpl::setCounterModeUp() {
	_mode = TIM_COUNTERMODE_UP;
}

void BasicTimerBasicImpl::setCounterModeDown() {
	_mode = TIM_COUNTERMODE_DOWN;
}

void BasicTimerBasicImpl::setCounterModeCenterAligned1() {
	_mode = TIM_COUNTERMODE_CENTERALIGNED1;
}

void BasicTimerBasicImpl::setCounterModeCenterAligned2() {
	_mode = TIM_COUNTERMODE_CENTERALIGNED2;
}

void BasicTimerBasicImpl::setCounterModeCenterAligned3() {
	_mode = TIM_COUNTERMODE_CENTERALIGNED3;
}

void BasicTimerBasicImpl::setClockDivision1() {
	_clockdiv = TIM_CLOCKDIVISION_DIV1;
}

void BasicTimerBasicImpl::setClockDivision2() {
	_clockdiv = TIM_CLOCKDIVISION_DIV2;
}

void BasicTimerBasicImpl::setClockDivision4() {
	_clockdiv = TIM_CLOCKDIVISION_DIV4;
}

void BasicTimerBasicImpl::setCounterOffset(BasicTimerBasicImpl::counter_t counter) {
	_counter = counter;
}

void BasicTimerBasicImpl::setPeriod(BasicTimerBasicImpl::counter_t period) {
	_period = period;
}

void BasicTimerBasicImpl::setEnableAutoReloadPreload() {
	_reload = TIM_AUTORELOAD_PRELOAD_ENABLE;
}

void BasicTimerBasicImpl::setDisableAutoReloadPreload() {
	_reload = TIM_AUTORELOAD_PRELOAD_DISABLE;
}

bool BasicTimerBasicImpl::isInterruptRequested() {
	return is_irq;
}

BasicTimerBasicImpl::counter_opt_t BasicTimerBasicImpl::getCounter() {
	if (timer == nullptr) {
		return {};
	}
	return timer->getCounter();
}

void BasicTimerBasicImpl::setPrescaler(BasicTimerBasicImpl::prescaler_t prescaler) {
	_prescaler = prescaler;
}

BasicTimerBasicImpl::auto_reload_t BasicTimerBasicImpl::getRawAutoReload() const {
	return _reload;
}

BasicTimerBasicImpl::period_t BasicTimerBasicImpl::getRawPeriod() const {
	return _period;
}

BasicTimerBasicImpl::clockdiv_t BasicTimerBasicImpl::getRawClockDivider() const {
	return _clockdiv;
}

BasicTimerBasicImpl::prescaler_t BasicTimerBasicImpl::getRawPrescaler() const {
	return _prescaler;
}

BasicTimerBasicImpl::counter_t BasicTimerBasicImpl::getRawRepetition() const {
	return _repetition;
}

BasicTimerBasicImpl::counter_mode_t BasicTimerBasicImpl::getRawCounterMode() const {
	return _mode;
}

BasicTimerBasicImpl::counter_t BasicTimerBasicImpl::getRawCounterOffset() const {
	return _counter;
}

BasicTimer::tim_handle_opt_t BasicTimerBasicImpl::getRawHandle() const {
	if (timer == nullptr) {
		return {};
	}
	return timer->getRawHandle();
}

bool BasicTimerBasicImpl::init() {
	if (timer == nullptr || sync == nullptr) {
		return false;
	}
	if (!sync->getResource(this)) {
		return false;
	}
	timer->init(this);
	timer->start(this);
	return true;
}

bool BasicTimerBasicImpl::de_init() {
	if (timer == nullptr || sync == nullptr) {
		return false;
	}
	if (!sync->releaseResource(this)) {
		return false;
	}
	timer->stop(this);
	timer->de_init(this);
	return true;
}

void BasicTimerBasicImpl::resetAllThis() {
	reset();
}

void BasicTimerBasicImpl::reset() {
	_counter = _reset__counter;
	_prescaler = _reset_prescaler; //ms
	_period = _reset_period;
	_clockdiv = _reset_clockdiv;
	_mode = _reset_mode;
	_reload = _reset_reload;
	_repetition = _reset_repetition;
}


