
#include "emailList.h"

EmailList::EmailList(ifstream & inFile) {
	string address;

	while (inFile) {
		getline(inFile, address);
		emails.Insert(address);
		}
	}

void EmailList::Purge(ofstream & outFile) {
	for (int i = 1; i < emails.GetLength(); ++i) {
		string address = emails.GetItemAt(i);
		outFile << address << endl;
		for (int j = i + 1; j < emails.GetLength(); ++j) {
			if (emails.GetItemAt(j) == address)
				emails.Delete(emails.GetItemAt(j));
			}
		}
	}