// Group Members:
// Kevin Mandiouba (ID: 40243497)
// Joyal Biju Kulangara (ID: 40237314)
// Assignment 5

#include "Staff.h"
#include <iostream>
#include <string>
using namespace std;

// Setters definition
void Staff::setFirst_name(string Fname) {
	First_name = Fname;
}
void Staff::setLast_name(string Lname) {
	Last_name = Lname;
}
void Staff::setID(int id) {
	ID = id;
}
void Staff::setDate_of_hiring(string hiring_date) {
	Date_of_hiring = hiring_date;
}
void Staff::setBonus_code(string Code_bonus) {
	Bonus_code = Code_bonus;
}
void Staff::setCurrent_Salary(double Salary) {
	 Current_Salary = Salary;
}

// Getters definition
string Staff::getFirst_name() {
	return First_name;
}
string Staff::getLast_name() {
	return Last_name;
}
int Staff::getID() {
	return ID;
}
string Staff::getDate_of_hiring() {
	return Date_of_hiring;
}
string Staff::getBonus_code() {
	return Bonus_code;
}
double Staff::getCurrent_Salary() {
	return Current_Salary;
}

// This function let the user input out all the information of one employee
void Staff::Input_Stf_info() {
	cout << "Employee first name: ";
	cin >> First_name;
	cout << "Employee last name: ";
	cin >> Last_name;
	cout << "Employee id: ";
	cin >> ID;
	cout << "Date of hiring: ";
	cin >> Date_of_hiring;
	cout << "Bonus code: ";
	cin >> Bonus_code;
	cout << "Current Salary: ";
	cin >> Current_Salary;
}

// This function prints out all the information of one staff
void Staff::Print_Stf_Info() {
	cout << "Employee first name: " << getFirst_name() << endl;
	cout << "Employee last name: " << getLast_name() << endl;
	cout << "Employee id: " << getID() << endl;
	cout << "Date of hiring: " << getDate_of_hiring() << endl;
	cout << "Bonus code: " << getBonus_code() << endl;
	cout << "Current Salary: " << getCurrent_Salary() << endl;
}

// Calculate Salary function definition
double Staff::Calculate_Salary() {
	if (Bonus_code == "8%") {
		return Current_Salary * (1 + 0.08);
	}
	else if (Bonus_code == "6%") {
		return Current_Salary * (1 + 0.06);
	}
	else if (Bonus_code == "3%") {
		return Current_Salary * (1 + 0.03);
	}
	else if (Bonus_code == "1%") {
		return Current_Salary * (1 + 0.01);
	}
	else {
		return Current_Salary;
	}
}