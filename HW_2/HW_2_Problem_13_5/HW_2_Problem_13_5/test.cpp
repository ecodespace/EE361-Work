
#include "emailList.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	ifstream inFile;
	ofstream outFile;
	string inFileName,outFileName;

	cout << "Please enter the name of the input file:\n";
	cin >> inFileName;
	cout << "Please enter the name of the output file:\n";
	cin >> outFileName;

	inFile.open(inFileName);
	outFile.open(outFileName);

	if (!inFile || !outFile) {
		cout << "Error: could not open one or more files.\n";
			return 1;
		}

	EmailList addresses(inFile);

	addresses.Purge(outFile);	

	return 0;
	}