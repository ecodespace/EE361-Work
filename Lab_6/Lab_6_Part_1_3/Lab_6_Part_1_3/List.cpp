#include "List.h"

template <class ItemType>

List<ItemType>::List() {
	length = 0;
	currentPos = 0;
}

template <class ItemType>
bool List<ItemType>::IsEmpty() const {
	return length == 0;
}

template <class ItemType>
bool List<ItemType>::IsFull()  const
{
	return length == MAX_LENGTH;
}

template <class ItemType>
int  List<ItemType>::GetLength()  const // Returns length of list 
{
	return length;
}

template <class ItemType>
void List<ItemType>::Insert(const ItemType & item)
{
	data[length] = item;
	length++;
}

template <class ItemType>
void List<ItemType>::Delete(const ItemType & item)
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

template <class ItemType>
bool List<ItemType>::IsPresent(const ItemType & item)  const
{
	int i = 0;
	while (i<length && data[i] != item)
	{
		++i;
	}

	return i != length;
}

template <class ItemType>
void List<ItemType>::ResetList()
{
	currentPos = 0;
}

template <class ItemType>
ItemType List<ItemType>::GetNextItem()
{
	currentPos++;
	return data[currentPos - 1];
}

template <class ItemType>
bool List<ItemType>::HasNext()
{
	return currentPos < length;
}

// straight selection sort: pp. 677
template <class ItemType>
void List<ItemType>::Sort()
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