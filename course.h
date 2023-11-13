// course.h

#ifndef COURSE_H
#define COURSE_H

#include "student.h"

// Structure to represent a course
struct Course
{
	char title[100];
	int numStudents;
	struct Student *students; // Array of students in the course
};

// Function declarations related to courses
void printCourse(struct Course course);
void printCourseRoster(struct Course course);

#endif // COURSE_H
