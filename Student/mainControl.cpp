#include "stdafx.h"
#include "mainControl.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <algorithm>	
#include <conio.h>
#include <Windows.h>
#include <sstream>


using namespace std;

/*ѧ������*/
void MainControl::readStudentInfo(string filename) {
	int no;
	string name;

	ifstream in;
	in.open(filename, ios::in);
	if (in) {
		while (!in.eof()) {////////////////
			in >> no;
			in >> name;
			Student student(no, name);
			students.push_back(student);
		}
	}
	else {
		//cout << "Open Failed." << endl;
		MessageBox(0, _T("����ʧ�ܣ�"), _T("��ʾ"), MB_OK);
		return;
	}
	in.close();
	for each(Student student in students) {
		Selection selection(student.getNo(), student.getName());
		selections.push_back(selection);
	}
	//cout << "����ɹ���" << endl;
	MessageBox(0,_T("����ɹ���"), _T("��ʾ"),MB_OK);
}

void MainControl::addStudent(long int no,string name) {
	Student student(no, name);
	students.push_back(student);
	Selection selection(no, name);
	selections.push_back(selection);

	MessageBox(0, _T("����ɹ�!"), _T("��ʾ"), MB_OK);
}

void MainControl::deleteStudent(long int no) {
	//long int no;
	//cout << "�������ɾ��ѧ��ѧ�š�" << endl;
	//cin >> no;

	vector<Student>::iterator iter;
	for (iter = students.begin(); iter != students.end();)
		if (iter->getNo() == no) {
			iter = students.erase(iter);
			MessageBox(0, _T("ɾ���ɹ�!"), _T("��ʾ"), MB_OK);

			break;
		}
		else
			iter++;

	if (iter == students.end()) {
		MessageBox(0, _T("δ�ҵ���ѧ��!"), _T("��ʾ"), MB_OK);
		return;
	}

	vector<Selection>::iterator iter_sel;
	for (iter_sel = selections.begin(); iter_sel != selections.end();)
		if (iter_sel->getNo() == no) {
			iter_sel = selections.erase(iter_sel);
			return;
		}
		else
			iter_sel++;
}

void MainControl::saveStudentInfo(string filename) {
	//string filename;
	//cout << "�����뵼���ļ�����." << endl;
	//cin >> filename;

	ofstream out(filename, ios::out);
	if (out)
		for each(Student student in students)
			out << student.getNo() << "\t" << student.getName() << endl;
	else {
		MessageBox(0, _T("����ʧ��!"), _T("��ʾ"), MB_OK);
		//cout << "Save Failed." << endl;
		return;
	}
	//cout << "����ɹ���" << endl;
	MessageBox(0, _T("����ɹ�!"), _T("��ʾ"), MB_OK);
}

void MainControl::sortStudentByNo() {
	sort(students.begin(), students.end(), [=](Student s1, Student s2)->bool {
		return s1.getNo() < s2.getNo();
	});
	sort(selections.begin(), selections.end(), [=](Selection sel1, Selection sel2)->bool {
		return sel1.getNo() < sel2.getNo();
	});
	//cout << "����ɹ�" << endl;
	MessageBox(0, _T("����ɹ�!"), _T("��ʾ"), MB_OK);

}

void MainControl::sortStudentByName() {
	sort(students.begin(), students.end(), [=](Student s1, Student s2)->bool {
		return s1.getName() < s2.getName();
	});
	sort(selections.begin(), selections.end(), [=](Selection sel1, Selection sel2)->bool {
		return sel1.getName() < sel2.getName();
	});
	//cout << "����ɹ�" << endl;
	MessageBox(0, _T("����ɹ�!"), _T("��ʾ"), MB_OK);
}

/*�γ̹���*/
void MainControl::readCourseInfo(string filename) {
	string name;
	int credit;

	ifstream in;
	in.open(filename, ios::in);
	if (in) {
		while (!in.eof()) {////////////////
			in >> name;
			in >> credit;
			Course course(credit, name);
			courses.push_back(course);
		}
	}
	else {
		//cout << "��ʧ�ܣ�" << endl;
		MessageBox(0, _T("����ʧ�ܣ�"), _T("��ʾ"), MB_OK);
		return;
	}
	in.close();
	//cout << "����ɹ���" << endl;
	MessageBox(0, _T("����ɹ���"), _T("��ʾ"), MB_OK);
}

void MainControl::addCourse(int credit,string name) {
	Course course(credit, name);
	courses.push_back(course);

	//cout << "��ӳɹ���" << endl;
	MessageBox(0, _T("��ӳɹ���"), _T("��ʾ"), MB_OK);

}

void MainControl::deleteCourse(string name) {
	vector<Course>::iterator iter;
	for (iter = courses.begin(); iter != courses.end();)
		if (iter->getName() == name) {
			iter = courses.erase(iter);
		//	cout << "ɾ���ɹ���" << endl;
			MessageBox(0, _T("ɾ���ɹ���"), _T("��ʾ"), MB_OK);
			return;
		}
		else
			iter++;
	if (iter == courses.end())
	//	cout << "δ�ҵ��ÿγ̣�" << endl;
		MessageBox(0, _T("δ�ҵ��ÿγ̣�"), _T("��ʾ"), MB_OK);

}

void MainControl::saveCourseInfo(string filename) {
	ofstream out(filename, ios::out);
	if (out)
		for each(Course course in courses)
			out << course.getName() << "\t" << course.getCredit() << endl;
	else {
		//cout << "����ʧ�ܣ�" << endl;
		MessageBox(0, _T("����ʧ�ܣ�"), _T("��ʾ"), MB_OK);
		return;
	}
//	cout << "�����ɹ���" << endl;
	MessageBox(0, _T("����ɹ���"), _T("��ʾ"), MB_OK);
}

/*ѡ�ι���*/
void MainControl::setSelection(long int no,string name) {
	int credit = -1;
	for (size_t i = 0; i < courses.size(); i++)
		if (courses[i].getName() == name)
			credit = courses[i].getCredit();
	if (credit == -1) {
		//cout << "δ�ҵ��ÿγ̣�" << endl;
		MessageBox(0, _T("δ�ҵ��ÿγ�"), _T("��ʾ"), MB_OK);
		return;
	}

	for (size_t i = 0; i < selections.size(); i++)
		if (selections[i].getNo() == no) {
			selections[i].addCourse(credit, name);
			//cout << "ѡ�γɹ���" << endl;
			MessageBox(0, _T("ѡ�γɹ���"), _T("��ʾ"), MB_OK);
			return;
		}
	//cout << "δ�ҵ���ѧ����" << endl;
	MessageBox(0, _T("δ�ҵ���ѧ����"), _T("��ʾ"), MB_OK);
}

void MainControl::cancelSelection(long int no,string name) {
	for (size_t i = 0; i < selections.size(); i++)
		if (selections[i].getNo() == no) {
			selections[i].deleteCourse(name);
			//cout << "�˿γɹ���" << endl;
			MessageBox(0, _T("�˿γɹ���"), _T("��ʾ"), MB_OK);
			return;
		}
	//cout << "�˿�ʧ�ܣ�" << endl;
	MessageBox(0, _T("�˿�ʧ�ܣ�"), _T("��ʾ"), MB_OK);
}

 string MainControl::queryStudent(long int no) {
	string result = "";
	for (size_t i = 0; i < selections.size(); i++)
		if (selections[i].getNo() == no) {
			//cout << no << "\t" << selections[i].getName() << endl;
			stringstream ssno;
			string sno;
			ssno << selections[i].getNo();
			ssno >> sno;
			result += sno + "\t" + selections[i].getName() + "\r" + "\n";
			list<Course> course_tmp;
			course_tmp = selections[i].getCourse();
			list<Course>::iterator iter;
			for (iter = course_tmp.begin(); iter != course_tmp.end(); iter++) {
				//cout << (*iter).getName() << "\t" << (*iter).getCredit() << endl;
				stringstream ss;
				string s;
				ss << (*iter).getCredit();
				ss >> s;
				result += (*iter).getName() + "\t" + s + "\r" + "\n";
			}
		}
	//cout << "�밴���������..." << endl;
	//while (_getch()) {
	//	break;
	//}
	if (result == "")
		result = "δ���ҵ���ѧ�������Ϣ";
	return result;
}

string MainControl::queryCourse(string name) {
	string result = "";
	for (size_t i = 0; i < selections.size(); i++)
		if (selections[i].hasCourse(name)) {
			//cout << selections[i].getNo() << "\t" << selections[i].getName() << endl;
			stringstream ss;
			string s;
			ss << selections[i].getNo();
			ss >> s;
			result += s + "\t" + selections[i].getName() + "\r" + "\n";
		}
	//cout << "�밴���������..." << endl;
	//while (_getch()) {
	//	break;
	//}
	if (result == "")
		result = "δ���ҵ��ÿγ������Ϣ";
	return result;
}
