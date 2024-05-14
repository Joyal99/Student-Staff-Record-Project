// Group Members:
// Kevin Mandiouba (ID: 40243497)
// Joyal Biju Kulangara (ID: 40237314)
// Assignment 5

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	// Student Attributes declaration
	string First_name;
	string Last_name;
	int ID;
	string Date_of_birth;
	double GPA_to_date;
	int Start_year;
	double Completed_credit;
	char Program;

public:
	// Setters declaration
	void setFirst_name(string Fname);
	void setLast_name(string Lname);
	void setID(int id);
	void setDate_of_birth(string birth_date);
	void setGPA_to_date(double current_GPA);
	void setStart_year(int Syear);
	void setCompleted_credit(double Ccredit);
	void setProgram(char program);

	// Getters declaration
	string getFirst_name();
	string getLast_name();
	int getID();
	string getDate_of_birth();
	double getGPA_to_date();
	int getStart_year();
	double getCompleted_credit();
	char getProgram();

	// Completed program function declaration
	bool CompleteProgram();

	// Student Status function declaration
	string StudentStatus();

	// Input Student Info declaration
	void Input_Std_info();

	// Print Student Info declaration
	void Print_Std_Info();
};

