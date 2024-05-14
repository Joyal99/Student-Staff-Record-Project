// Group Members:
// Kevin Mandiouba (ID: 40243497)
// Joyal Biju Kulangara (ID: 40237314)
// Assignment 5

#pragma once
#include "Student.h"
#include "Staff.h"
#include <vector>
#include <array>
using namespace std;

class Student_Staff
{
private:
	string* Student_Array_ptr = new string [1];
	string* Staff_Array_ptr = new string [1];

public:
	void Read_student();
	void Read_staff();
};