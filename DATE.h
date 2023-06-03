#pragma once
#include <iostream>

class Date
{
private:
	int number;
	int month;
	int year;

public:
	Date();
	Date(int number, int month, int year);
	Date(const Date& date);
	~Date();

	int GetNumber();
	int GetMonth();
	int GetYear();

	void SetNumber(int number);
	void SetMonth(int month);
	void SetYear(int year);

	void ShowDate();
};


