#include "Date.h"

Date::Date()
	: number(0), month(0), year(0)
{
}

Date::Date(int number, int month, int year)
	: number(number), month(month), year(year)
{
}

Date::Date(const Date& date)
	: number(date.number), month(date.month), year(date.year)
{
}

Date::~Date()
{
}

int Date::GetNumber()
{
	return number;
}

int Date::GetMonth()
{
	return month;
}

int Date::GetYear()
{
	return year;
}

void Date::SetNumber(int number)
{
	this->number = number;
}

void Date::SetMonth(int month)
{
	this->month = month;
}

void Date::SetYear(int year)
{
	this->year = year;
}

void Date::ShowDate()
{
	std::cout << "Date: " << number << "." << month << "." << year << " ";
}

