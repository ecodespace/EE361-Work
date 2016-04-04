#include <iostream>
#include "phoneNumber.h"

using namespace std;

bool compareNums(phoneNumber p1, phoneNumber p2);
void displayPhoneNum(phoneNumber p);

int main() {
	//phoneNumber blank();
	phoneNumber cell(1,802,7936789,Type(3));

	displayPhoneNum(cell);

	cout << endl << "Press any key to exit: " << endl;
	getchar();

	return 0;
	}

bool compareNums(phoneNumber p1, phoneNumber p2) {
	bool isEqual = false;
	if (p1.getCountryCode() == p2.getCountryCode()) {
		if (p1.getAreaCode() == p2.getAreaCode()) {
			if (p1.getPhoneNum() == p2.getPhoneNum()) isEqual = true;
			}
		}
	return isEqual;
	}

void displayPhoneNum(phoneNumber p) {
	cout << "+" << p.getCountryCode() << " (" << p.getAreaCode() << ") " 
		<< p.getPhoneNum() << endl;
	}