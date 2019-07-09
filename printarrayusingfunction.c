#include <stdio.h>

//returntype name(arguments)
void printArray(int array[],int length)
{
	for(int i=0;i<length;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}

int main()
{
	int scoresTeam1[] = {10,101,25,47};
	int scoresLength = 4;
	int scoresTeam2[] = {10,100,5,7};

	printArray(scoresTeam1,scoresLength);
	printArray(scoresTeam2,scoresLength);
	return 0;
}
