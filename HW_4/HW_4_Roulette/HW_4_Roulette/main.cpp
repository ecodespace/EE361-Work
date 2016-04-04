
#include <iostream>
#include <cstdlib>
#include "NumGroup.h"

using namespace std;

enum Choice { Number = 1, Red, Black, Even, Odd, First_18, Second_18, Column, Row, };

int main() {
	int black_nums_arr[] = { 2,4,6,8,10,11,13,15,17,20,22,24,26,28,29,31,33,35 };
	NumGroup black(black_nums_arr);
	int red_nums_arr[] = { 1,3,5,7,9,12,14,16,18,19,21,23,25,27,30,32,34,36 };
	NumGroup red(red_nums_arr);
	
	int col_1_arr[] = { 1,4,7,10,13,16,19,22,25,28,31,34 };
	NumGroup col_1(col_1_arr);
	int col_2_arr[] = { 2,5,8,11,14,17,20,23,26,29,32,35 };
	NumGroup col_2(col_2_arr);
	int col_3_arr[] = { 3,6,9,12,15,18,21,24,27,30,33,36 };
	NumGroup col_3(col_3_arr);

	cout << "Welcome to the Roulette Simulator!\nWhat would you like to bet on? (Use numbers to select option)\n";
	cout << "1) Individual Number\n" << "2) Red Numbers\n" << "3) Black Numbers\n" << "4) Even Numbers" << "5) Odd Numbers\n" 
			<< "6) First 18 Numbers (1-18)\n" << "7) Second 18 Numbers (19-36)\n" << "8) Column\n" << "9) Row\n";

	char quit[] = "quit";

	cin >> quit;
	}