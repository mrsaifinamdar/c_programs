#include <stdio.h>

struct Student
{
	char name[100];
	int marks;
	int year;
};

struct Student readStudentFromFile()
{
	//Get a pointer to the opened file
	FILE *fp = fopen("sample.txt","r");
	struct Student student;

	//Read from the file
	fscanf(fp,"%s %d %d\n",student.name,&student.marks,&student.year);

	//Close the file
	fclose(fp);

	return student;

}

void printStudent(struct Student student)
{
	printf("%s %d %d\n",student.name,student.marks,student.year);
}

int main()
{
	struct Student student = readStudentFromFile();
	printStudent(student);
}
