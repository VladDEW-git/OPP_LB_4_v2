#pragma once
#include <iostream>

class DATE
{
private:

	int number;
	int month;
	int year;
public:

	// Constructors

	DATE();
	DATE(int number, int month, int year);
	DATE(DATE& date1);

	// Destructors

	~DATE();

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

