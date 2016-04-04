#include <fstream>
#include <iostream>
#include "List_int.h"
#include "List_float.h"

using namespace std;

int main() {
	List_int temps_int;         // List of temperature readings
	int oneTemp; 

	int temps[] = {63, 32, 41, 44, 50, 58, 62};

	cout << "Fahrenheit Temperatures:\n";
	for (int ct = 0; ct < sizeof(temps)/sizeof(int); ++ct) {
		temps_int.Insert(temps[ct]);
		cout << temps_int.GetNextItem() << endl;
		}

	temps_int.ResetList(); // Reset the int list

	List_float temps_celsius;

	while (temps_int.HasNext()) {
		float temp = (temps_int.GetNextItem() - 32) * (5.0/9.0);
		temps_celsius.Insert(temp);
		}

	temps_celsius.ResetList();

	cout << "Celsius Temperatures:\n";
	while (temps_celsius.HasNext()) {
		cout << temps_celsius.GetNextItem() << endl;
		}

	char c;
	cin >> c;

	return 0;
	}