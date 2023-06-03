#include "DATE.h"

DATE::DATE()
	: number(6), month(4), year(2023)
{

}

DATE::DATE(int number, int month, int year)
	: number(number), month(month), year(year)
{

}

DATE::DATE(DATE& date1)
	: number(date1.number), month(date1.month), year(date1.year)
{

}

DATE::~DATE()
{

}

int DATE::GetNumber()
{
	return number;
}

int DATE::GetMonth()
{
	return month;
}

int DATE::GetYear()
{
	return year;
}

int DATE::SetNumber(int number)
{
	return this->number = number;
}

int DATE::SetMonth(int month)
{
	return this->month = month;
}

int DATE::SetYear(int year)
{
	return this->year = year;
}

void DATE::ShowDate()
{
	std::cout << "Date: " << number << "." << month << "." << year << " ";
}

