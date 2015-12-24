// HelloWorld.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


void printSomethingBetter()
{
	std::cout << "Something Better!" << std::endl;
}

int main()
{
	std::cout << "Hello World!" << std::endl;

	for (int i = 0; i < 10; i++) {
		printSomethingBetter();
		std::cout << "i = " << i << std::endl;
	}
		
	return 0;
}

