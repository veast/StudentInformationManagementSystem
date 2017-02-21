#pragma once
#include"StudentClass.h"
#include"CourseClass.h"
#include"SelectionClass.h"

#include<vector>

using namespace std;

class MainControl {
private:
	vector<Student> students;
	vector<Course> courses;
	vector<Selection> selections;
public:
	/*ѧ������*/
	void readStudentInfo(string);
	void addStudent(long int,string);
	void deleteStudent(long int);
	void saveStudentInfo(string);
	void sortStudentByNo();
	void sortStudentByName();

	/*�γ̹���*/
	void readCourseInfo(string);
	void addCourse(int,string);
	void deleteCourse(string);
	void saveCourseInfo(string);

	/*ѡ�ι���*/
	void setSelection(long int,string);
	void cancelSelection(long int,string);
	string queryStudent(long int);
	string queryCourse(string);
};