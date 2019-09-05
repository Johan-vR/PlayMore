//============================================================================
// Name        : PlayMore.cpp
// Author      : Johan van Rooyen (2019)
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void subProc(int a, int b)
{
	printf("a+b=%d",a+b);
}


int main() {
	printf("Hello world!\n");
	subProc(3,5);
	return 0;
}
