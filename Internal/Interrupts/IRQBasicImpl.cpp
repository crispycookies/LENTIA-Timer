//
// Created by TobiEgger on 26.02.2020.
//

#include "IRQBasicImpl.h"
#include <algorithm>

IRQn_Type IRQBasicImpl::getIRQ() const {
	return irq_n;
}

IRQBasicImpl::callee_opt_ptr_t IRQBasicImpl::getIRQFun(IRQCallee *callee) const {
	if(callee == nullptr){
		return {};
	}
	if(callee->getIRQ() != std::experimental::nullopt &&  callee->getIRQ().value() != irq_n){
		return {};
	}
	auto found = std::find_if(functions_to_call.cbegin(), functions_to_call.cend(), [&](const callee_tuple_t & callee_tuple){
		return callee_tuple.second == callee;
	});
	if(found == functions_to_call.end() || found->first == nullptr){
		return {};
	}
	return found->first;
}

bool IRQBasicImpl::setIRQFun(IRQCallee *callee, IRQ::callee_ptr_t func) {
	if(func == nullptr){
		return false;
	}
	if(callee == nullptr){
		return false;
	}
	if(callee->getIRQ() != std::experimental::nullopt &&  callee->getIRQ().value() != irq_n){
		return false;
	}
	auto found = std::find_if(functions_to_call.begin(), functions_to_call.end(), [&](callee_tuple_t & callee_tuple){
		return callee_tuple.second == callee;
	});
	if(found == functions_to_call.end()){
		functions_to_call.push_back({func,callee});
		return true;
	}else if(found->first == nullptr ){
		found->first = func;
		found->second = callee;
		return true;
	}
	return false;
}

IRQ::callee_func_vect_opt_t IRQBasicImpl::getRawFunctionVector() const {
	if(functions_to_call.empty()){
		return {};
	}
	return functions_to_call;
}

bool IRQBasicImpl::setRemoveIRQFun(IRQCallee *callee) {
	if(callee == nullptr){
		return false;
	}
	auto found = std::find_if(functions_to_call.begin(), functions_to_call.end(), [&](callee_tuple_t & callee_tuple){
		return callee_tuple.second == callee;
	});
	if(found == functions_to_call.end()){
		return false;
	}
	functions_to_call.erase(found);
	return true;
}

bool IRQBasicImpl::setReplaceIRQFun(IRQCallee *callee, callee_ptr_t func) {
	if(callee == nullptr){
		return false;
	}
	if(func == nullptr){
		return false;
	}
	auto found = std::find_if(functions_to_call.begin(), functions_to_call.end(), [&](callee_tuple_t & callee_tuple){
		return callee_tuple.second == callee;
	});
	if(found == functions_to_call.end()){
		return false;
	}
	found->first = func;
	return true;
}

void IRQBasicImpl::doAsRequested() {
	for(auto i : functions_to_call){
		if(i.first != nullptr && i.second != nullptr){
			i.first->doAsRequested();
		}
	}
}

IRQ::irq_mask_t IRQBasicImpl::getIRQMask() const {
	return irq_mask;
}
