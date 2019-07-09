#include <stdio.h>
int main()
{

	int scores[] = {106, 15, 145, 23, 235,235,235,0,21};
				  // 0    1   2   3
	int scoresLength = 7;

	int i = 0;//initialization

	do
	{//i:7
		printf(" %d ",scores[i]);
		i++;//increment
	}
	while(i<(sizeof(scores)/sizeof(int)));//condition
}
