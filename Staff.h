#pragma once
#include <iostream>
#include <string>
using namespace std;

class Staff
{
private:
	// Staff Attributes declaration
	string First_name;
	string Last_name;
	int ID;
	string Date_of_hiring;
	string Bonus_code;
	double Current_Salary;

public:
	// Setters declaration
	void setFirst_name(string Fname);
	void setLast_name(string Lname);
	void setID(int id);
	void setDate_of_hiring(string hiring_date);
	void setBonus_code(string Code_bonus);
	void setCurrent_Salary(double Salary);

	// Getters declaration
	string getFirst_name();
	string getLast_name();
	int getID();
	string getDate_of_hiring();
	string getBonus_code();
	double getCurrent_Salary();

	// Input Staff Info declaration
	void Input_Stf_info();

	// Print Staff Info declaration
	void Print_Stf_Info();

	// Calculate Salary function declaration
	double Calculate_Salary();
};

