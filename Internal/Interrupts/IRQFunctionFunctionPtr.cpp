//
// Created by TobiEgger on 01.03.2020.
//

#include "IRQFunctionFunctionPtr.h"

void IRQFunctionFunctionPtr::doAsRequested() {
	if(function == nullptr){
		return;
	}
	function();
}
