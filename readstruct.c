#include <stdio.h>

struct Student
{
	char name[100];
	int marks;
	int year;
};



void printStudent(struct Student student)
{
	printf("%s %d %d\n",student.name,student.marks,student.year);
}

int main()
{
	struct Student st[3];
	FILE *fp = fopen("sample.txt","r");
	for(int i=0;i<3;i++)
    {

	//Read from the file
	fscanf(fp,"%s %d %d\n",st[i].name,&st[i].marks,&st[i].year);
    }
	//Close the file
	fclose(fp);
	printf("Starting three lines are as follows:\n");
	for(int i=0;i<3;i++)
    printStudent(st[i]);
}
