//
// Created by TobiEgger on 26.02.2020.
//

#ifndef DRONE_IRQFUNCTION_H
#define DRONE_IRQFUNCTION_H

#include "../../../../Common/LentiaBase/Object.h"

class IRQFunction : public Object{
protected:
	IRQFunction()= default;
public:
	virtual ~IRQFunction() = default;

	virtual void doAsRequested() = 0;
};

#endif //DRONE_IRQFUNCTION_H
