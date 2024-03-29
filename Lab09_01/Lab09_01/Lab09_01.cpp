// Lab09_01.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//


#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class Student {
private:
	string name;
	int id;
	string department;
	int grade;
	int credit;
public:
	Student(string n = "default", unsigned int i = 0,
		string d = "default", int g = 0, int c = 0): name(n),id(i),department(d),grade(g),credit(c){}

	void Setter(string n, unsigned int i, string d, int g, int c) {
		name = n;
		id = i;
		department = d;
		grade = g;
		credit = c;
	}
	string getName() {
		return name;
	}
	int getId() {
		return id;
	}
	string getDepart() {
		return department;
	}
	int getGrade() {
		return grade;
	}
	int getCredit() {
		return credit;
	}

	virtual void print() {
		cout << "I'm student\n\n";
	}
};
class Graduate:public Student{
private:
	string type;
	float rate;
public:
	Graduate(string n, unsigned int i, string d, int g, int c, bool w, float r): Student(n, i, d, g, c) {

		//this->Setter(n, i, d, g, c);
		if (w) type = "교육조교";
		else type = "연구조교";

		rate = r;
	}
	void print() override {
		cout << "===================================\n";
		cout << "이    름 : " << this->getName() << endl;
		cout << "학    번 : " << this->getId() << endl;
		cout << "소속학과 : " << this->getDepart() << endl;
		cout << "학    년 : " << this->getGrade() << endl;
		cout << "이수학점 : " << this->getCredit() << endl;
		cout << "조교유형 : " << type << endl;
		cout << "장학유형 : " << rate << endl;
		cout << "===================================\n";

	}
};
class UnderGraduate :public Student {
private:
	string club;
public:
	UnderGraduate(string n, unsigned int i, string d, int g, int c, string cb) {
		this->Setter(n, i, d, g, c);
		club = cb;
	}
	void print() override {
		cout << "===================================\n";
		cout << "이    름 : " << this->getName() << endl;
		cout << "학    번 : " << this->getId() << endl;
		cout << "소속학과 : " << this->getDepart() << endl;
		cout << "학    년 : " << this->getGrade() << endl;
		cout << "이수학점 : " << this->getCredit() << endl;
		cout << "동아리명 : " << club << endl;
		cout << "===================================\n";

	}
	
};

int main()
{
	Student Std;
	Graduate Kang("강석원", 2018311025, "컴퓨터공학과", 1, 18, false, 0.5);
	UnderGraduate Hong("홍길동", 20141111, "컴퓨터공학과", 2, 80, "알고리즘동아리");

	Std.print();
	Kang.print();
	Hong.print();
    return 0;
}

