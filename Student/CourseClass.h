#pragma once
#include <string>	

using namespace std;

class Course {
private:
	int credit;
	string name;
public:
	Course();
	Course(int credit, string name);
	~Course();

	void setCredit(int credit);
	void setName(string name);

	int getCredit();
	string getName();
};