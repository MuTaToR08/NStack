#include <iostream>
#include "VStack.h"



void main()
{
	int* test = new int[20];
	VStack<int> t(test,10);

	t.push(12);
	t.push(12);
	t.push(12);
	t.push(12);
	t.push(12);

	std::cout << t<<std::endl;

	t.resize(4);
	std::cout << t << std::endl;

	t.SetPointer(test + 10);
	t.resize(10);
	t.push(22);
	std::cout << t;



	std::cin.get();
}