#include"student.h"

int main() {
	student s1;
	s1.displayinfo();
	cout << endl;
	s1.calculategrade();
	cout << endl;
	student s2("nazim", 20, 43, 2.8);
	s2.displayinfo();
	cout << endl;
	s2.calculategrade();
	cout << endl;
	student s3;
	s3.setname("Muaaz");
	s3.setage(21);
	s3.setrollno(102);
	s3.setgpa(2.6);

	s3.displayinfo();
	cout << endl;
	s3.calculategrade();
	cout << endl;
	cout << "Program ended. Destructors will now run."<<endl;

	return 0;
}