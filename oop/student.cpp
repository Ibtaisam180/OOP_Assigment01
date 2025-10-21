// Student.cpp
#include "student.h"
// Default constructor
student::student() {

	studentname = "Ibtaisam";
	studentage = 19;
	rollno = 12;
	studentgpa = 3.2;


}
// Parameterized constructor
student::student(string n, int a, int r, float g) {
	 studentname=n;
	studentage = a;
	rollno = r;
	studentgpa = g;


}
student::~student() {
	cout << " Destructor called for "<<studentname<<endl;
}
	void student::setname(string n) {
		 studentname=n;
	}
	void student:: setage(int a) {
		 studentage=a;
	}
	void student::setrollno(int r) {
		rollno = r;
	}
	void student::setgpa(float g) {
		 studentgpa=g;

	}

	void student::displayinfo() {
		cout << " Name:  " << studentname << " || Age:" << studentage << " || Roll no:" << rollno << " || CGPA: " << studentgpa ;
	};
	void student::calculategrade() {
		if (studentgpa >= 3.7)
			cout << " Grade: A "<<endl;
		else if (studentgpa >= 3.0)
			cout << " Grade: B "<<endl;
		else if (studentgpa >= 2.0)
			cout << " Grade: C "<<endl;
		else
			cout << " Grade: F "<<endl;
	}