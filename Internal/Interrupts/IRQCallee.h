//
// Created by TobiEgger on 26.02.2020.
//

#ifndef DRONE_IRQCALLEE_H
#define DRONE_IRQCALLEE_H

#include "../../../../Common/LentiaBase/Object.h"
#include "../../../../Common/CPP/optional.h"

class IRQCallee : public Object{
protected:
	IRQCallee()= default;
public:
	typedef uint32_t irq_mask_t;
	typedef std::experimental::optional<IRQn_Type> irqn_type_opt_t;
	virtual ~ IRQCallee() = default;

	virtual irqn_type_opt_t getIRQ() const= 0;
};

#endif //DRONE_IRQCALLEE_H
