// student.c

#include <stdio.h>
#include "student.h"

void printStudent(struct Student student)
{
	printf("Name: %s\n", student.name);
	printf("Age: %d\n", student.age);
	printf("GPA: %.2f\n", student.gpa);
}
