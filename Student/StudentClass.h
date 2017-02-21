#pragma once
#include<string>

using namespace std;

class Student {
private:
	long int no;
	string name;
public:
	Student();
	Student(long int no, string name);
	~Student();

	void setNo(long int no);
	void setName(string name);

	long int getNo();
	string getName();

	bool operator == (const Student &s) { return (this->no == s.no) && (this->name == s.name); }
};