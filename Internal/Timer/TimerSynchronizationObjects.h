//
// Created by TobiEgger on 23.02.2020.
//

#ifndef DRONE_TIMERSYNCHRONIZATIONOBJECTS_H
#define DRONE_TIMERSYNCHRONIZATIONOBJECTS_H

#include "../../../../Common/LentiaBase/SynchronizationObjectBasicImpl.h"

class __SYNCH_TIM1 : public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_TIM1()  = default;
public:
	static inline __SYNCH_TIM1 & getInstance(){
		static __SYNCH_TIM1 __SYNCH_TM;
		return __SYNCH_TM;
	}
	~__SYNCH_TIM1() final= default;
};

class __SYNCH_TIM8 : public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_TIM8()  = default;
public:
	static inline __SYNCH_TIM8 & getInstance(){
		static __SYNCH_TIM8 __SYNCH_TM;
		return __SYNCH_TM;
	}
	~__SYNCH_TIM8() final= default;
};

class __SYNCH_TIM20 : public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_TIM20()  = default;
public:
	static inline __SYNCH_TIM20 & getInstance(){
		static __SYNCH_TIM20 __SYNCH_TM;
		return __SYNCH_TM;
	}
	~__SYNCH_TIM20() final= default;
};

class __SYNCH_TIM2 : public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_TIM2()  = default;
public:
	static inline __SYNCH_TIM2 & getInstance(){
		static __SYNCH_TIM2 __SYNCH_TM;
		return __SYNCH_TM;
	}
	~__SYNCH_TIM2() final= default;
};

class __SYNCH_TIM3 : public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_TIM3()  = default;
public:
	static inline __SYNCH_TIM3 & getInstance(){
		static __SYNCH_TIM3 __SYNCH_TM;
		return __SYNCH_TM;
	}
	~__SYNCH_TIM3() final= default;
};

class __SYNCH_TIM4 : public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_TIM4()  = default;
public:
	static inline __SYNCH_TIM4 & getInstance(){
		static __SYNCH_TIM4 __SYNCH_TM;
		return __SYNCH_TM;
	}
	~__SYNCH_TIM4() final= default;
};

class __SYNCH_TIM15 : public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_TIM15()  = default;
public:
	static inline __SYNCH_TIM15 & getInstance(){
		static __SYNCH_TIM15 __SYNCH_TM;
		return __SYNCH_TM;
	}
	~__SYNCH_TIM15() final= default;
};

class __SYNCH_TIM16 : public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_TIM16()  = default;
public:
	static inline __SYNCH_TIM16 & getInstance(){
		static __SYNCH_TIM16 __SYNCH_TM;
		return __SYNCH_TM;
	}
	~__SYNCH_TIM16() final= default;
};

class __SYNCH_TIM17 : public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_TIM17()  = default;
public:
	static inline __SYNCH_TIM17 & getInstance(){
		static __SYNCH_TIM17 __SYNCH_TM;
		return __SYNCH_TM;
	}
	~__SYNCH_TIM17() final= default;
};

class __SYNCH_TIM6 : public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_TIM6()  = default;
public:
	static inline __SYNCH_TIM6 & getInstance(){
		static __SYNCH_TIM6 __SYNCH_TM;
		return __SYNCH_TM;
	}
	~__SYNCH_TIM6() final= default;
};

class __SYNCH_TIM7 : public SynchronizationObjectBasicImpl{
protected:
	__SYNCH_TIM7()  = default;
public:
	static inline __SYNCH_TIM7 & getInstance(){
		static __SYNCH_TIM7 __SYNCH_TM;
		return __SYNCH_TM;
	}
	~__SYNCH_TIM7() final= default;
};
#endif //DRONE_TIMERSYNCHRONIZATIONOBJECTS_H
