#include "List_float.h"

List_float::List_float() {
	length = 0;
	currentPos = 0;
	}

bool List_float::IsEmpty() const {
	return length == 0;
	}

bool List_float::IsFull()  const {
	return length == MAX_LENGTH_FLOAT;
	}

int  List_float::GetLength() const { // Returns length of list 
	return length;
	}

void List_float::Insert(ItemType  item) {
	data[length] = item;
	length++;
	}

void List_float::Delete(ItemType  item) {
	int i = 0;
	while (i<length && data[i] != item) {
		++i;
		}

	if (i<length) {
		data[i] = data[length - 1];
		length--;
		}
	}

bool List_float::IsPresent(ItemType  item)  const {
	int i = 0;
	while (i<length && data[i] != item) {
		++i;
		}

	return i != length;
	}

void List_float::ResetList() {
	currentPos = 0;
	}

ItemType List_float::GetNextItem() {
	currentPos++;
	return data[currentPos - 1];
	}

bool List_float::HasNext() {
	return currentPos < length;
	}

// straight selection sort: pp. 677
void List_float::Sort()
{
	for (int passes = 0; passes<length; ++passes)
	{
		// select minIndex such that data[minIndex] is minimal between data[passes] and data[length-1]
		int minIndex;
		minIndex = passes;
		for (int i = passes + 1; i<length; ++i)
		{
			if (data[minIndex]>data[i])
				minIndex = i;
		}

		// swap data[minIndex] and data[passes]
		int tmp = data[minIndex];
		data[minIndex] = data[passes];
		data[passes] = tmp;
	}
}