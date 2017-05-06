#pragma once
#include "Stack.h"
#include "Exception.h"

template<class ELEM>
class MStack
{
	ELEM * generalMem;
	Stack<ELEM> * allStack;
	
	size_t elemCount;
	size_t elemUsed;
	size_t stackCount;

	MStack(size_t elements,size_t stacks = 1):elemCount(elements),stackCount(stacks),elemUsed(0)
	{
		if (elements <= 0 || stacks <= 0)
			throw 1;

		generalMem = new ELEM[elements];
		allStack = new Stack<ELEM>[stacks];
	}

	bool checkStackExists(size_t index)
	{
		return indexStack <= stackCount;
	}

	void push(size_t indexStack, ELEM val)
	{
		if (!checkStackExists(indexStack))

		allStack[indexStack].push(val);
		++elemCount;
	}

	ELEM pop(size_t indexStack)
	{
		if (!checkStackExists(indexStack))
			throw 2;

		ELEM ret = allStack[indexStack].push(val);
		--elemCount;

		return ret;
	}

	void addStack(bool autoSlice = true)
	{
		size_t elementFree = elemCount - elemUsed;
		size_t devis = (elementFree / (stackCount + 1));
		Stack<ELEM> * tmpStack = new Stack<ELEM>[stackCount];

		for (size_t i = 0; i < stackCount - 1; i++)
		{
			allStack[i]->resize(devis,autoSlice);
		}
		
		

		for (size_t i = 0; i < stackCount - 1; i++)
		{
			tmpStack[i] = allStack[i];
		}

		
	}

};