//============================================================================
// Name        : PlayMore.cpp
// Author      : Johan van Rooyen (2019)
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "calc.h"
using namespace std;

void subProc(int a, int b)
{
	printf("a+b=%d",a+b);
}

void count(int a, int b)
{
	for (int i=0; i < b; i++)
		printf("%d\n",a+i);
}

int main() {
	printf("Hello world!\n");
	printf("a+b=%d\n", subProcAdd(3,5));
	printf("a-b=%d\n", subProcAdd(8,3));
	count(10,10);
	return 0;
}
