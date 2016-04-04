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
    // todo 2
    while (index>-1 && (data[index]).CompareTo(item) == 1) {
        data[index+1]=data[index];
        index--;
        }
    // data[index]<=item and data[index+1] is available
    data[index+1]=item;
    length++; 
    }

void SortedList::Delete(ItemType item) {
    bool found;
    int index;

    BinarySearch(item, found, index);
    if (found) {
        while (index<length-1) {
            data[index] = data[index+1];
            index++;
            }
        length--;
        }
    }

void SortedList::BinarySearch(ItemType item, bool & found, int & position) const {
    int left, right, middle;
    found = false;
    left = 0;
    right = length-1;
    while (left<=right && !found) {
        middle = (left+right)/2;
        // todo 3
        if ((data[middle]).CompareTo(item) == 0) {
            found = true;
            position = middle;
            break;
            }
        // todo 4
        else if ((data[middle]).CompareTo(item) == -1) {
            left = middle+1;
            }
        else {
            right = middle-1;
            }
        }
    }

bool SortedList::IsPresent(ItemType item) const {
     bool found;
     int position;

     BinarySearch(item, found, position);
    return found;
    }

void SortedList::ResetList() {
    currentPos = 0;
    }

bool SortedList::HasNext() {
    return currentPos < length;
    }

ItemType SortedList::GetNextItem() {
    ++currentPos;
    return data[currentPos-1];
    }
