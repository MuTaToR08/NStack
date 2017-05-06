#pragma once
#include "Stack.h"

template<class T>
class VStack :
	public Stack<T>
{
public:
	VStack() :Stack() {};
	VStack(T* point,size_t Size) :Stack()
	{
		mass = point;
		this->maxSize = Size;
	};
	virtual ~VStack(){}
	void SetPointer(T* p)
	{
		mass = p;
	}
	void resize(size_t newSize, bool autoSlice = true)
	{
		if (newSize <= 0)
			throw STACK_ERROR_SIZE;

		if (currentElem > newSize && autoSlice)
			currentElem = newSize;
		else if(currentElem > newSize && !autoSlice)
			throw STACK_SAFE_RESIZE;

		for (int i = currentElem; i < maxSize; i++)
			mass[i] = T();

		this->maxSize = newSize;
	}
};
