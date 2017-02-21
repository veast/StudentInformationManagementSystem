#pragma
#include "stdafx.h"
#include "SelectionClass.h"



Selection::Selection(long int no, string name) :Student(no, name) {}

void Selection::addCourse(int credit, string name) {
	Course course(credit, name);
	this->course.push_back(course);
}

void Selection::deleteCourse(string name) {
	list<Course>::iterator iter;
	for (iter = course.begin(); iter != course.end();)
		if (iter->getName() == name) {
			course.erase(iter);
			break;
		}
		else
			iter++;
}

list<Course> Selection::getCourse() {
	return course;
}

bool Selection::hasCourse(string name) {
	list<Course>::iterator iter;
	for (iter = course.begin(); iter != course.end();)
		if (iter->getName() == name)
			return true;
		else
			iter++;
	return false;
}