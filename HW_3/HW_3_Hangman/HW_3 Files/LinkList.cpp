#include <iostream>
#include "LinkList.h"
#include "Slot.h"

using namespace std;

LinkList::LinkList () {
    head = NULL;
    }

bool LinkList::IsEmpty () const {
    return head == NULL;
    }

void LinkList::Insert(/* in */  ItemType  item) {
    NodeType * tmp = new NodeType;
    tmp->info = item;
    currentPos.link = tmp;
    }

void LinkList::Delete (/* in */  ItemType  item) {
    NodeType * prev = NULL;
    NodeType * current = head;
    while (current!=NULL && current->info.getLetter() != item.getLetter()) {
        prev = current;
        current = current->link;
        }

    if (current!=NULL && current->info.getLetter() == item.getLetter()) {
        if (prev!=NULL) {
            prev->link = current->link;
            current->link=NULL;
            delete current;
            }
        else {
            head = current->link;
            current->link=NULL;
            delete current;
            }
        }
    }

void LinkList::Print () const {
    NodeType * tmp = head;
    while (tmp!=NULL) {
        tmp->info.display();
        tmp = tmp->link;
        }
    }

void LinkList::Reset() {
    currentPos = *head;
    }

Slot LinkList::GetNextItem() {
    NodeType currentNode = currentPos;
    currentPos.link = (currentPos.link)->link;
    return currentNode.info;
    }

Slot LinkList::GetItem() {
    return currentPos.info;
    }

bool LinkList::RevealLetters(char c) {
	Reset(); //Start at the beginning of the list
	if (GetItem().getLetter() == c) { // If the current letter matches the guess
		GetItem().reveal(); // Reveal the current letter
		return true;
		}
	else {
		return false;
		}
	}

    // Destructor
LinkList::~LinkList () {
    Free();
    }

void LinkList::Free() {
    NodeType * current = head;
    NodeType * tmp;
    while (current!=NULL) {
        tmp = current->link;
        delete current;
        current = tmp;
        }
    head = NULL;
    }

    // Copy-constructor
LinkList::LinkList (const LinkList&  otherList) {
    NodeType* tmp, * prev, * current;
    prev = NULL;
    current = otherList.head;
    while (current!=NULL) {
        tmp = new NodeType;
        tmp->info = current->info;
        tmp->link = NULL;
        if (prev!=NULL) {
            prev->link = tmp;
            prev = tmp;
            }
        else prev = head = tmp;

        current = current->link;
        }
    }

LinkList & LinkList::operator = (const LinkList & otherList) {
    Free();
    NodeType* tmp, * prev, * current;
    prev = NULL;
    current = otherList.head;
    while (current!=NULL) {
        tmp = new NodeType;
        tmp->info = current->info;
        tmp->link = NULL;
        if (prev!=NULL) {
            prev->link = tmp;
            prev = tmp;
            }
        else prev = head = tmp;

        current = current->link;
        }
    return *this;
    }
