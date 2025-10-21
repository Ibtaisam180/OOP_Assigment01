#pragma once
// Student.h
#ifndef STUDENT_H       // Header guard
#define STUDENT_H

#include<iostream>
using namespace std;
class student {
private:
// Encapsulation: private data members cannot be accessed directly
	string studentname;
	int studentage;
	int rollno;
	float studentgpa;
public:
	student();
	student(string n, int a, int r, float g);

	~student();
// Setter methods (Encapsulation)
	void setname(string n);
	void setage(int a);
	void setrollno(int r);
	void setgpa(float g);
	// Getter methods (Encapsulation)
	string getname();
	int getage();
	int getrollno();
	float getgpa();
 // Abstraction: only showing relevant functionality
	void displayinfo();
	void calculategrade();
	    




};
#endif //end of header guard
