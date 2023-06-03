#pragma once
#include <iostream>

class Date
{
private:

	int number;
	int month;
	int year;
public:

	// Constructors

	Date();
	Date(int number, int month, int year);
	Date(Date& date1);

	// Destructors

	~Date();

	// Get methods

	int GetNumber();
	int GetMonth();
	int GetYear();

	// Set methods

	int SetNumber(int number);
	int SetMonth(int month);
	int SetYear(int year);

	// Show methods

	void ShowDate();
};

