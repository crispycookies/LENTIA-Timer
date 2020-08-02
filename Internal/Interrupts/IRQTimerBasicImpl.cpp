//
// Created by TobiEgger on 01.03.2020.
//

#include "IRQTimerBasicImpl.h"

IRQTimerBasicImpl::tim_handle_opt_t IRQTimerBasicImpl::getRawHandle() {
	if(timer == nullptr){
		return {};
	}
	return timer->getRawHandle();
}

bool IRQTimerBasicImpl::setTimer(Timer * timer_) {
	if(timer_ == nullptr || timer != nullptr){
		return false;
	}
	timer = timer_;
	return true;
}

bool IRQTimerBasicImpl::unsetTimer() {
	if(timer == nullptr){
		return false;
	}
	timer = nullptr;
	return true;
}

bool IRQTimerBasicImpl::clearIRQ() {
	if(timer == nullptr){
		return false;
	}
	auto handle = timer->getRawHandle();
	__HAL_TIM_CLEAR_IT(&handle,irq_mask);
	return true;
}
