#include <stdio.h>

initialize two variable and swap their values and print
int main()
{
	int score1;
	int score2;
	float sum;

	score1 = 5;
	score2 = 15;

	sum = score1 + score2;

	printf("score1:%d score2:%d sum:%.1f",
			score1,score2,sum);
	return 0;
}
