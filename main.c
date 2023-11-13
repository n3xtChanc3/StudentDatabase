// main.c

#include <stdio.h>  // Include the standard I/O header
#include "student.h"
#include "course.h"

int main()
{
	// Create a student
	struct Student student1 = {"Alice", 20, 3.8};

	// Create a course with an array of students
	struct Student studentsInCourse[] = {{"Bob", 22, 3.5}, {"Charlie", 21, 3.2}};
	struct Course course1 = {"Introduction to Programming", 2, studentsInCourse};

	// Print student and course information
	printStudent(student1);
	printf("\n");
	printCourse(course1);
	printf("\n");
	printCourseRoster(course1);

	return 0;

}
