// course.c

#include <stdio.h>
#include "course.h"

void printCourse(struct Course course)
{
	printf("Course Title: %s\n", course.title);
	printf("Number of Students: %d\n", course.numStudents);
}

void printCourseRoster(struct Course course)
{
	printf("Course Roster for %s:\n", course.title);
	for (int i = 0; i < course.numStudents; i++)
	{
		printStudent(course.students[i]);
	}
}
