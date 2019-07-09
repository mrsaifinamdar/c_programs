#include <stdio.h>

void welcome()
{
	printf("Welcome to to this channel\n");
}

void subscribe() //declaration
{
	printf("Subscribe to this channel\n");
}

int main()
{
	int like=0;
	welcome(); //calling or invocation

	if(like==1) // true if like has non zero
	{
		subscribe();
	}
	else
	{
		printf("Please tell us what we can do to improve");
	}
}
