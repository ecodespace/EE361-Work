
#include <iostream>
#include "Date.h"

using namespace std;

int main() {

	int month;
	int day;
	int year;

	cout << "Enter month. Negative month stops test.\n";
	cin >> month;

	while (month >= 0) {
		cout << "Enter day and year.\n";
		cin >> day >> year;

		try {
			Date date1(month, day, year);
			cout << "Valid Date.\n";
			}
		catch (MonthError error) {
			cout << "Attempt to create date with invalid month.\n";
			}
		catch (DayError error) {
			cout << "Attempt to create date with invalid day.\n";
			}
		catch (YearError error) {
			cout << "Attempt to create date with invalid year.\n";
			}

		cout << "Enter month. Negative month stops test.\n";
		cin >> month;
		}

		return 0;
	}
