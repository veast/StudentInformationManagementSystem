#include "stdafx.h"
#include<iostream>
#include"CourseClass.h"


using namespace std;

Course::Course() {
	this->credit = 0;
	this->name = "";
}

Course::Course(int credit, string name) {
	this->credit = credit;
	this->name = name;
}

Course::~Course() {
	this->credit = 0;
	this->name = "";
}

void Course::setCredit(int credit) {
	this->credit = credit;
}

void Course::setName(string name) {
	this->name = name;
}

int Course::getCredit() {
	return credit;
}

string Course::getName() {
	return name;
}