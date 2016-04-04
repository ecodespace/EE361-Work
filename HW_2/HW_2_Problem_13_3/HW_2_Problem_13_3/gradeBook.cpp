#include "gradeBook.h"
#include <iostream>
#include <string>

using namespace std;

GradeBook::GradeBook(ifstream & inFile) {
	float sum=0;
	int maxGrade=0;
	int length = 0;
	int numBelow=0; 

	string grade;
	
	while (inFile) {
		getline(inFile, grade);
		int studentGrade = atoi(grade.c_str());
		roster.Insert(studentGrade);
		sum = sum + studentGrade;
		if (studentGrade > maxGrade)
			maxGrade = studentGrade; //replace the current max with the current value4
		//inFile >> studentGrade;
		}

	average = sum / roster.GetLength();
	while (roster.HasNext() && roster.GetNextItem() < average)
			numBelow++;
	}
   
float GradeBook::GetAverageGrade() const {
	return average;
	}

int GradeBook::GetMaxGrade() {
	return maxGrade;
	}

int GradeBook::GetMinGrade() {
	roster.ResetIteration();
	return roster.GetCurrentItem();
	}

int GradeBook::GetLength() {
	return this->roster.GetLength();
	}

void GradeBook::BarChart() {
	cout << "Bar Chart of Exam Scores:\n";
	int min = roster.GetItemAt(1); //Get the value of the first item
	//cout << min << endl;
	int max = roster.GetItemAt(roster.GetLength()-1); //Get the value of the last item
	//cout << max << endl;
	
	for (int ct = max; ct >= min; --ct) { //Move from highest to lowest grade in roster
		cout << ct << " |"; //Print the current grade
		while (roster.GetCurrentItem() == ct) { //If the grade equals the value of the current item
			cout << " *";
			this->roster.GetPreviousItem();
			}
		cout << endl;
		}

	}

/*
int GradeBook::GetAboveAverage() const {
	return roster.GetLength()-numBelow;
	}

int GradeBook::GetBelowAverage() const {
	return numBelow;
	}
*/
