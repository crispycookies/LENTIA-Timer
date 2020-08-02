//
// Created by TobiEgger on 01.03.2020.
//

#ifndef DRONE_IRQFUNCTIONFUNCTIONPTR_H
#define DRONE_IRQFUNCTIONFUNCTIONPTR_H

#include "IRQFunction.h"

class IRQFunctionFunctionPtr : public IRQFunction{
public:
	typedef void (*void_func_t)();
protected:
	void_func_t  function;
public:
	explicit IRQFunctionFunctionPtr(void_func_t function_): function(function_) {};
	~IRQFunctionFunctionPtr() override = default;

	void doAsRequested() override;
};


#endif //DRONE_IRQFUNCTIONFUNCTIONPTR_H
