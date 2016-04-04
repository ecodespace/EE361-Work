#include <string>

using namespace std;

class StudentGrade
{
 public: 
 StudentGrade();
 StudentGrade(string name, float grade);
 int CompareTo(StudentGrade other) const;
 string GetName();
 float GetGrade();
 private:
     string name;
     float grade;
};
