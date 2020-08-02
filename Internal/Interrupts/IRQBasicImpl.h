//
// Created by TobiEgger on 26.02.2020.
//

#ifndef DRONE_IRQBASICIMPL_H
#define DRONE_IRQBASICIMPL_H

#include "IRQ.h"

class IRQBasicImpl : public IRQ{
protected:
	IRQBasicImpl(IRQn_Type irq_n_, irq_mask_t irq_mask_) : irq_n(irq_n_), irq_mask(irq_mask_) {};
	IRQn_Type irq_n;
	callee_func_vect_t functions_to_call;
	irq_mask_t irq_mask;
public:
	~IRQBasicImpl() override = default;
	IRQn_Type getIRQ() const override ;
	callee_opt_ptr_t getIRQFun(IRQCallee * callee)  const override;
	bool setIRQFun(IRQCallee * callee, callee_ptr_t func)  override;
	callee_func_vect_opt_t getRawFunctionVector() const override;
	bool setRemoveIRQFun(IRQCallee * callee) override;
	bool setReplaceIRQFun(IRQCallee * callee, callee_ptr_t func) override;
	void doAsRequested() override;
	irq_mask_t getIRQMask() const override;
	bool clearIRQ() override  = 0;
};


#endif //DRONE_IRQBASICIMPL_H
