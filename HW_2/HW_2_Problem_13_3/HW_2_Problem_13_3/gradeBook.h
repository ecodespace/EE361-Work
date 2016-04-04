
#include "sortedList.h"
#include <fstream>

using namespace std;

class GradeBook {
	public: 
		GradeBook(ifstream & inFile);
   
		float GetAverageGrade() const;
		int GetMaxGrade();
		int GetMinGrade();
		int GetLength();
		//int GetAboveAverage() const;
		//int GetBelowAverage() const;

		void BarChart();
		//void StudentsMaxGrade(ofstream & outFile);
		//void StudentsAbove(ofstream & outFile);
		//void StudentsBelow(ofstream & outFile);

	private:
		float average;
		int maxGrade;
		int numBelow;
		SortedList roster; // list of grade/name pairs
	};
