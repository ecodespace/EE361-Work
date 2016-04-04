/*
 * Slot.h
 *
 *  Created on: Mar 11, 2016
 *      Author: ECpower2
 */

#ifndef SLOT_H_
#define SLOT_H_

class Slot {
    public:
        Slot();
        Slot(char letter);

        void reveal(); //Changes the display boolean to true
        bool isRevealed() const; //Gets the display boolean value
        void display() const; //Displays the letter (or a blank)
        char getLetter() const; //Gets the value of the stored char
    private:
        char letter_;
        bool display_;
    };

#endif /* SLOT_H_ */
