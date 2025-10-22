#pragma once

#include<iostream>
using namespace std;
class student {
private:
// Encapsulation
	string studentname;
	int studentage;
	int rollno;
	float studentgpa;
public:
	student();
	student(string n, int a, int r, float g);

	~student();
// Setter methods
	void setname(string n);
	void setage(int a);
	void setrollno(int r);
	void setgpa(float g);
	// Getter methods 
	string getname();
	int getage();
	int getrollno();
	float getgpa();
 // Abstraction
	void displayinfo();
	void calculategrade();
	    

};
