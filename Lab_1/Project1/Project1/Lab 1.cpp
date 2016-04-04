// Lab 1 - "Create an Array of Name Objects" - January 27, 2016
// Written by: Emily Campbell (0466665)

#include <iostream>
#include <fstream>
#include "Name.h"

using namespace std;

void openFiles(ifstream & inFile, ofstream & outFile);

Name getName(ifstream & inFile);

void writeTimeName(ofstream & outFile, Name names[]);

int main() {
	ifstream inFile;
	ofstream outFile;

	Name names[24];
	Name blankName;
	Name name;

	int hours, dummy;

	for (int ix = 0; ix < 24; ++ix) {
		names[ix] = blankName;
		}

	openFiles(inFile, outFile);
	if (!(inFile && outFile)) {
		cout << "Files did not open properly" << endl;
		return 1;
		}

	name = getName(inFile);
	while (inFile) {
		inFile >> hours >> dummy >> dummy;
		if (names[hours].getFirstName() == " ") {
			names[hours] = name;
			}
		else {
			outFile << hours << " is already taken." << endl;
			}

		name = getName(inFile);
		}

	writeTimeName(outFile, names);
	outFile.close();
	inFile.close();

	return 0;
	}

void openFiles(ifstream & inFile, ofstream & outFile) {
	string inFileName;
	string outFileName;

	cout << "Enter the name of the file to be processed:" << endl;
	cin >> inFileName;
	inFile.open(inFileName.c_str());

	cout << "Enter the name of the output file:" << endl;
	cin >> outFileName;
	outFile.open(outFileName.c_str());
	}

Name getName(ifstream & inFile) {
	string first, middle, last;
	inFile >> first >> middle >> last;
	Name name(first, middle, last);
	return name;
	}

void writeTimeName(ofstream & outFile, Name names[]) {
	outFile << "A listing of the hour and the corresponding name:" << endl;

	for (int hour = 0; hour < 24; ++hour) {
		if (names[hour].getFirstName() != " ") {
			outFile << "Hour " << hour << ": " << names[hour].getFirstName() << " " 
					<< names[hour].getMiddleName() << " " << names[hour].getLastName() << endl;
			}
		else {
			outFile << "Hour " << hour << ": None was scheduled." << endl;
			}
		}
	}
