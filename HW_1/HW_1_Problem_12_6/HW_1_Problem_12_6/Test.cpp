

#include <iostream>
#include "Time.h"

bool greaterThan(Time t1, Time t2);
bool lessThan(Time t1, Time t2);
bool equals(Time t1, Time t2);

Time addTimes(Time t1, Time t2);
Time subtractTimes(Time t1, Time t2);

int main() {

	Time t1(6, 30);
	Time t2(8, 51);

	bool isGreaterThan = greaterThan(t1, t2);
	if (isGreaterThan) cout << "t1 > t2: TRUE" << endl;
	else cout << "t1 > t2: FALSE" << endl;

	bool isLessThan = lessThan(t1, t2);
	if (isLessThan) cout << "t1 < t2: TRUE" << endl;
	else cout << "t1 < t2: FALSE" << endl;

	bool isEqual = equals(t1, t2);
	if (isEqual) cout << "t1 = t2: TRUE" << endl;
	else cout << "t1 = t2: FALSE" << endl;

	Time t3 = addTimes(t1, t2);
	cout << "t3 - minutes: " << t3.getMinutes() << " seconds: " << t3.getSeconds() << endl;

	Time t4 = subtractTimes(t1, t2);
	cout << "t4 - minutes: " << t4.getMinutes() << " seconds: " << t4.getSeconds() << endl;

	return 0;
}

bool greaterThan(Time t1, Time t2) {
	if (t1.getMinutes() > t2.getMinutes()) return true;
	else if (t1.getMinutes() == t2.getMinutes() && t1.getSeconds() > t2.getSeconds()) return true;
	else return false;
}

bool lessThan(Time t1, Time t2) {
	if (t1.getMinutes() < t2.getMinutes()) return true;
	else if (t1.getMinutes() == t2.getMinutes() && t1.getSeconds() < t2.getSeconds()) return true;
	else return false;
}

bool equals(Time t1, Time t2) {
	bool result = false;
	if (t1.getMinutes() == t2.getMinutes()) {
		if (t1.getSeconds() == t2.getSeconds()) result = true;
	}
	return result;
}

Time addTimes(Time t1, Time t2) {
	int min = t1.getMinutes() + t2.getMinutes();
	int sec = t2.getSeconds() + t2.getSeconds();
	Time result(min, sec);
	return result;
}

Time subtractTimes(Time t1, Time t2) {
	int min, sec;

	if (greaterThan(t1, t2) == true) {
		min = t1.getMinutes() - t2.getMinutes();
		sec = t2.getSeconds() - t2.getSeconds();
	}
	else {
		min = 0;
		sec = 0;
	}

	Time result(min, sec);

	return result;
}