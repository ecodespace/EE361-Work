
#include <iostream>
#include <fstream>
#include "gradeBook.h"

using namespace std;

int main() {
	ifstream inFile;
	string inFileName;

	cout << "Enter the name of the input file:\n";
	cin >> inFileName;

	inFile.open(inFileName);

	if (!inFile) {
		cout << "Could not open input file.\n";
		return 1;	
		}

	GradeBook examGrades(inFile);

	examGrades.BarChart();

	char e;
	cout << endl << "Press any letter and hit ENTER to exit: " << endl;
	cin >> e;

	return 0;
	}