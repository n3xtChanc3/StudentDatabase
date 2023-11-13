// student.h

#ifndef STUDENT_H
#define STUDENT_H

// Structure to represent a student
struct Student
{
	char name[50];
	int age;
	float gpa;
};

// Function declarations related to students
void printStudent(struct Student student);

#endif // STUDENT_H
