#include "Student_Staff.h"
#include "Student.h"
#include "Staff.h"
#include <vector>
#include <array>
#include <fstream>
using namespace std;

fstream Employees;
int line_number;
int current_line;
string line;

void Student_Staff::Read_student() {
	Employees.open("students.txt");
	if (Employees.is_open()) {
		line_number = 17;
		current_line = 0;

		while (!Employees.eof()) {
			getline(Employees, line);
			cout << line;
			if(current_line == line_number){
				break;
			}
		}
		
		Employees.close();
	}
}

void Student_Staff::Read_staff() {
	Employees.open("staff.txt", ios::in);
	if (Employees.is_open()) {
		line_number = 17;
		current_line = 0;

		while (!Employees.eof()) {
			getline(Employees, line);
			cout << line;
			if (current_line == line_number) {
				break;
			}
		}

		Employees.close();
	}
}
