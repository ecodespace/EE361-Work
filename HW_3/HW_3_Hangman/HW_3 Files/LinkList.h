/*
 * LinkList.h
 *
 *  Created on: Mar 11, 2016
 *      Author: ECpower2
 */

#ifndef LINKLIST_H_
#define LINKLIST_H_

#include "Slot.h"
typedef Slot ItemType;

struct NodeType {
    ItemType info;
    NodeType * link;
    };

class LinkList {
    public:
        bool IsEmpty () const;

        void Insert (/* in */  ItemType  item);
        void Delete (/* in */  ItemType  item);
        void Print () const;
        void Reset();
        bool RevealLetters();

        Slot GetItem();
        Slot GetNextItem();

        LinkList (); // Constructor
        LinkList (const LinkList & otherList); // Copy-constructor
        LinkList & operator = (const LinkList & otherList); // = operator
        ~LinkList (); // Destructor

    private:
        void Free();
        NodeType* head, currentPos;
    };



#endif /* LINKLIST_H_ */
