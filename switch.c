#include <stdio.h>

int main()
{
	int score=6;
	//1 - Single 2- Double
	//3 - Triple 4 - Boundary 6 - Sixer

	switch(score)
	{
	case 1 :
		printf("Single");
		break;
	case 2 :
		printf("Double");
		break;
	default:
		printf("Something Else");
		break;
	case 4:
		printf("Boundary");
		break;
	}
}
