
#include "sortedList.h"
#include <fstream>

class EmailList {
	public:
		EmailList(ifstream & inFile); //Constructor
		void Purge(ofstream & outFile); //Cleans duplicate emails

	private:
		SortedList emails;
	};