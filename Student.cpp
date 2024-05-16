#include "Student.h"
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Setters definition
void Student::setFirst_name(string Fname) {
	First_name = Fname;
}
void Student::setLast_name(string Lname) {
	Last_name = Lname;
}
void Student::setID(int id) {
	ID = id;
}
void Student::setDate_of_birth(string birth_date) {
	Date_of_birth = birth_date;
}
void Student::setGPA_to_date(double current_GPA) {
	GPA_to_date = current_GPA;
}
void Student::setStart_year(int Syear) {
	Start_year = Syear;
}
void Student::setCompleted_credit(double Ccredit) {
	Completed_credit = Ccredit;
}
void Student::setProgram(char program) {
	Program = program;
}

// Getters definition
string Student::getFirst_name() {
	return First_name;
}
string Student::getLast_name() {
	return Last_name;
}
int Student::getID() {
	return ID;
}
string Student::getDate_of_birth() {
	return Date_of_birth;
}
double Student::getGPA_to_date() {
	return GPA_to_date;
}
int Student::getStart_year() {
	return Start_year;
}
double Student::getCompleted_credit() {
	return Completed_credit;
}
char Student::getProgram() {
	return Program;
}

// Completed program function definition
bool Student::CompleteProgram() {
	switch (Program) {
	case 'B':
		if (Completed_credit == 140) {
			return true;
		}
		else {
			return false;
		}
		break;
	case 'M':
		if (Completed_credit == 16) {
			return true;
		}
		else {
			return false;
		}
		break;
	case 'P':
		if (Completed_credit == 12) {
			return true;
		}
		else {
			return false;
		}
		break;
	}
}

// Student Status function definition
string Student::StudentStatus() {
	if (GPA_to_date >= 3.5) {
		return "A+";
	}
	else if (GPA_to_date >= 3 && GPA_to_date < 3.5) {
		return "A";
	}
	else if (GPA_to_date >= 2.5 && GPA_to_date < 3) {
		return "B";
	}
	else if (GPA_to_date >= 2 && GPA_to_date < 2.5) {
		return "C";
	}
	else {
		return "D";
	}
}

// This function let the user input out all the information of one student
void Student::Input_Std_info() {
	cout << "Student first name: ";
	cin >> First_name;
	cout << "Student last name: ";
	cin >> Last_name;
	cout << "Student id: ";
	cin >> ID;
	cout << "Date of birth: ";
	cin >> Date_of_birth;
	cout << "GPA to the date (Range: 0 - 4.4): ";
	cin >> fixed >> setprecision(1) >> GPA_to_date;
	cout << "Start year: ";
	cin >> Start_year;
	cout << "Completed credit: ";
	cin >> Completed_credit;
	cout << "Program (B: bachelor, M : master’s, P : Ph.D.): ";
	cin >> Program;
}

// This function prints out all the information of one student
void Student::Print_Std_Info() {
	cout << "Student first name: " << getFirst_name() << endl;
	cout << "Student last name: " << getLast_name() << endl;
	cout << "Student id: " << getID() << endl;
	cout << "Date of birth: " << getDate_of_birth() << endl;
	cout << "GPA to the date: " << fixed << setprecision(1) << getGPA_to_date() << " (Status: " << StudentStatus() << ")" << endl;
	cout << "Start year: " << getStart_year() << endl;
	cout << "Completed credit: " << getCompleted_credit() << endl;
	cout << "Program: " << getProgram() << endl;
}
