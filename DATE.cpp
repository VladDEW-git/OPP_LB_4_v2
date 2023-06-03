#include "Date.h"

Date::Date()
	: number(6), month(4), year(2023)
{

}

Date::Date(int number, int month, int year)
	: number(number), month(month), year(year)
{

}

Date::Date(Date& date1)
	: number(date1.number), month(date1.month), year(date1.year)
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

int Date::SetNumber(int number)
{
	return this->number = number;
}

int Date::SetMonth(int month)
{
	return this->month = month;
}

int Date::SetYear(int year)
{
	return this->year = year;
}

void Date::ShowDate()
{
	std::cout << "Date: " << number << "." << month << "." << year << " ";
}

