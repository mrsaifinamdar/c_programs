
Define a a structure for a student.
Get value from user
Store
and display data for 3 students.
#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s;
int main()
{
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks);
    printf("Displaying Information:\n");
    printf("Name: ");
    puts(s.name);
    printf("Roll number: %d\n",s.roll);
    printf("Marks: %.1f\n", s.marks);
    return 0;
}
