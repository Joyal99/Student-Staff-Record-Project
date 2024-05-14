// Group Members:
// Kevin Mandiouba (ID: 40243497)
// Joyal Biju Kulangara (ID: 40237314)
// Assignment 5

#include <iostream>
#include <fstream>
#include "Student.h"
#include "Staff.h"
#include "Student_Staff.h"
using namespace std;

int main() {
	Student student1;
	Staff employee1;

	cout << "*********************************" << endl;

	cout << "\tStudent 1" << endl;

	cout << "*********************************" << endl;

	student1.Input_Std_info();

	cout << endl;

	student1.Print_Std_Info();

	cout << endl;

	cout << "*********************************" << endl;

	cout << "\tEmployee 1" << endl;

	cout << "*********************************" << endl;

	employee1.Input_Stf_info();
	
	cout << endl;

	employee1.Print_Stf_Info();
}