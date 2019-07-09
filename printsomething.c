#include <stdio.h>

void printSomething()
{
	printf("I will not be executed");
}

int main()
{
	printf("I'm a great guy");
	printSomething();
	return 0;
}
