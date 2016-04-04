#include <iostream>
#include <string>

using namespace std;

class Name
{
public:
	Name();
	Name(string firstName, string middleName, string lastName);

	string getFirstName() const;
	string getLastName() const;
	string getMiddleName() const;

private:
	string first;
	string last;
	string middle;
};