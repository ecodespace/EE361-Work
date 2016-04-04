#include "List_int.h"

List_int::List_int()
{
	length = 0;
	currentPos = 0;
}

bool List_int::IsEmpty() const
{
	return length == 0;
}

bool List_int::IsFull()  const
{
	return length == MAX_LENGTH_INT;
}

int  List_int::GetLength()  const // Returns length of list 
{
	return length;
}

void List_int::Insert(ItemType  item)
{
	data[length] = item;
	length++;
}

void List_int::Delete(ItemType  item)
{
	int i = 0;
	while (i<length && data[i] != item)
	{
		++i;
	}

	if (i<length)
	{
		data[i] = data[length - 1];
		length--;
	}
}

bool List_int::IsPresent(ItemType  item)  const
{
	int i = 0;
	while (i<length && data[i] != item)
	{
		++i;
	}

	return i != length;
}

void List_int::ResetList()
{
	currentPos = 0;
}

ItemType List_int::GetNextItem()
{
	currentPos++;
	return data[currentPos - 1];
}

bool List_int::HasNext()
{
	return currentPos < length;
}

// straight selection sort: pp. 677
void List_int::Sort()
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