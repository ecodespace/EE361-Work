
#include <iostream>
#include "Date.h"

bool isLeapYear(int year);

using namespace std;

Date::Date() {
	month = 1;
	day = 1;
	year = 1582;
	}

Date::Date(int InitMonth, int InitDay, int InitYear) {
	static int daysInMonth[12] =
	{ 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	if (InitMonth <= 0 || InitMonth > 12) {
		throw MonthError();
		}
	month = InitMonth;

	if (month == 2 && InitDay == 29 && !isLeapYear(InitYear)) {
		throw DayError();
		}
	if (InitDay <= 0 || InitDay > daysInMonth[InitMonth - 1]) {
		throw DayError();
		}
	day = InitDay;

	if (InitYear < 1582) {
		throw YearError();
		}
	year = InitYear;
	}

int Date::GetMonth() const { return month; }
int Date::GetDay() const { return day; }
int Date::GetYear() const { return day; }

bool Date::operator<(const Date & otherDate) const {
	if (year < otherDate.year) {
		return true;
		}
	else if (year > otherDate.year) {
		return false;
		}
	else if (month < otherDate.month) {
		return true;
		}
	else if (month > otherDate.month) {
		return false;
		}
	else if (day < otherDate.day) {
		return true;
		}
	else return false;
	}

bool Date::operator>(const Date & otherDate) const {
	return otherDate < *this;
	}

bool Date::operator==(const Date & otherDate) const {
	return (month == otherDate.month)
		&& (year == otherDate.year)
		&& (day == otherDate.day);
	}

bool isLeapYear(int year) {
	if (year % 4 != 0) return false;

	if (year % 100 != 0) return true;

	if (year % 400 != 0) return false;

	return true;
	}