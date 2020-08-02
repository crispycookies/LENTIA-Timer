//
// Created by TobiEgger on 26.02.2020.
//

#ifndef DRONE_IRQ_H
#define DRONE_IRQ_H

#include "../../../../Common/LentiaBase/Object.h"
#include "IRQCallee.h"
#include "IRQFunction.h"
#include <tuple>
#include <vector>

class IRQ : public Object{
protected:
	IRQ()= default;
public:
	virtual ~IRQ() = default;

	typedef IRQFunction * callee_ptr_t;
	typedef std::experimental::optional<callee_ptr_t> callee_opt_ptr_t;
	typedef std::pair<callee_ptr_t, IRQCallee*> callee_tuple_t;
	typedef std::vector<callee_tuple_t> callee_func_vect_t;
	typedef std::experimental::optional<callee_func_vect_t> callee_func_vect_opt_t;
	typedef callee_func_vect_t::iterator callee_func_vect_iterator_t;
	typedef uint32_t irq_mask_t;

	virtual IRQn_Type getIRQ() const= 0;
	virtual callee_opt_ptr_t getIRQFun(IRQCallee * callee) const= 0;
	virtual bool setIRQFun(IRQCallee * callee, callee_ptr_t func) = 0;
	virtual bool setRemoveIRQFun(IRQCallee * callee) = 0;
	virtual bool setReplaceIRQFun(IRQCallee * callee, callee_ptr_t func) = 0;
	virtual void doAsRequested() = 0;
	virtual callee_func_vect_opt_t getRawFunctionVector() const = 0;
	virtual irq_mask_t getIRQMask() const = 0;
	virtual bool clearIRQ() = 0;
};

#endif //DRONE_IRQ_H
