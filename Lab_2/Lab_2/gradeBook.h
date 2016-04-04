#include "sortedList.h"
#include <fstream>

class GradeBook
{
 public: 
   GradeBook(ifstream & inFile);
   
   float GetAverageGrade() const;
   float GetMaxGrade() const;
   int GetAboveAverage() const;
   int GetBelowAverage() const;
   float GetMinGrade();

   void StudentsMaxGrade(ofstream & outFile);
   void StudentsAbove(ofstream & outFile);
   void StudentsBelow(ofstream & outFile);

 private:
   float average;
   float maxGrade;
   int numBelow;
   SortedList roster; // list of grade/name pairs
};
