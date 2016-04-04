#include <iostream>
#include "List.h"

using namespace std;

int main() {
	List<int> list_i;
	List<float> list_f;

	int ints[] = { 1,2,3,5,8,13,21 };
	float floats[] = { 1.0,2.0,3.0,5.0,8.0,13.0,21.0 };

	for (int i = 0; i < sizeof(ints) / sizeof(int); ++i) {
		list_i.Insert(ints[i]);
		}

	for (int f = 0; f < sizeof(floats) / sizeof(float); ++f) {
		list_f.Insert(floats[f]);
		}

	list_i.ResetList();
	list_f.ResetList();

	cout << "Int list:\n";
	while (list_i.HasNext()) {
		cout << list_i.GetNextItem() << endl;
		}

	while (list_f.HasNext()) {
		cout << list_f.GetNextItem() << endl;
		}

	char c;
	cin >> c;
	}