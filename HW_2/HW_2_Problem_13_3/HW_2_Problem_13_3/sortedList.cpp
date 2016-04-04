#include "sortedList.h"

SortedList::SortedList() {
	length = 0;
	currentPos = 0;
	}

bool SortedList::IsEmpty() const {
	return length==0;
	}

bool SortedList::IsFull() const {
	return length==MAX_LENGTH;
	}

int SortedList::GetLength() const {
	return length;
	}

void SortedList::Insert(ItemType item) {
	int index = length-1;
	while (index>-1 && data[index]>item) {
		data[index+1]=data[index];
		index--;
		}
 // data[index]<=item and data[index+1] is available
	data[index+1]=item;
	length++; 
	}

void SortedList::Delete(ItemType item) {
	int index=0;
	while (index<length && data[index]<item) {
		index++;
		}
	if (index<length && data[index]==item) {
		while (index<length-1) {
			data[index] = data[index+1];
			index++;
			}
		length--;
		}
	}

bool SortedList::IsPresent(ItemType item) const {
	int index;
	index = 0;
	while (index<length && data[index]<item) {
		++index;
		}
  
	bool found = (index<length && data[index]==item);

	return found;
	}

void SortedList::ResetIteration() {
	currentPos = 0;
	}

bool SortedList::HasNext() {
	return currentPos < length;
	}

ItemType SortedList::GetPreviousItem() {
	--currentPos;
	return data[currentPos-1];
	}

ItemType SortedList::GetNextItem() {
	++currentPos;
	return data[currentPos-1];
	}

ItemType SortedList::GetCurrentItem() {
	return data[currentPos-1];
	}

ItemType SortedList::GetItemAt(int ix) {
	currentPos = ix + 1;
	return data[ix];
	}