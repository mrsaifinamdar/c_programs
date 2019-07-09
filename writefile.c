#include <stdio.h>

struct Student
{
	char name[100];
	int marks;
	int year;
};

void writeStudentToFile(struct Student student)
{
	//Get a pointer to the opened file
	// w   1 = 1
	// r
	// a - 5 + 1 = 6
	FILE *fp = fopen("Sample.txt","a");

	//Write to the file
	fprintf(fp,"%s %d %d\n",student.name,student.marks,student.year);

	//Close the file
	fclose(fp);
}
int main()
{
	struct Student student =
		{"kohli",100,4};

	writeStudentToFile(student);
}
