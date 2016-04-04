#include "Name.h"

Name::Name()
{
	first = " ";
	middle = " ";
	last = " ";
}

Name::Name(string firstName, string middleName, string lastName)
{
	first = firstName;
	middle = middleName;
	last = lastName;
}

string Name::getFirstName() const
{
	return first;
}

string Name::getLastName() const
{
	return last;
}

string Name::getMiddleName() const
{
	return middle;
}
