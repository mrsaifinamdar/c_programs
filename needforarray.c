#include <stdio.h>


int main()
{
	int score1=6;
	int score2=15;
	int score3=145;
	int count = 0;

	if(score1>99)
		count = count + 1;

	if(score2>99)
		count = count + 1;

	if(score3>99)
		count = count + 1;

	printf("Number of Centuries %d",count);
}
