#pragma once
#include"StudentClass.h"
#include"CourseClass.h"
#include <list>

using namespace std;

class Selection : public Student {
private:
	list<Course> course;	//Ñ¡¿ÎÁ´±í
public:
	Selection(long int no, string name);
	void addCourse(int credit, string name);
	void deleteCourse(string name);
	bool hasCourse(string name);
	list<Course> getCourse();
};