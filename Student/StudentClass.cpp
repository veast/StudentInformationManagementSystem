#include "stdafx.h"
#include <iostream>
#include "StudentClass.h"


using namespace std;

Student::Student() {
	no = 0;
	name = "";
}

Student::Student(long int no, string name) {
	this->no = no;
	this->name = name;
}

Student::~Student() {
	this->no = 0;
	this->name = "";
}

void Student::setNo(long int no) {
	this->no = no;
}

void Student::setName(string name) {
	this->name = name;
}

long int Student::getNo() {
	return no;
}

string Student::getName() {
	return name;
}