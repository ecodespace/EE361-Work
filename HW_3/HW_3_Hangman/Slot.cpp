/*
 * Slot.cpp
 *
 *  Created on: Mar 11, 2016
 *      Author: ECpower2
 */

#include "Slot.h"
#include <iostream>

using namespace std;

Slot::Slot() {
    letter_ = ' ';
    display_ = false;
    }

Slot::Slot(char letter) {
    letter_ = letter;
    display_ = false;
    }

void Slot::reveal() {
    display_ = false;
    }

bool Slot::isRevealed() const {
	return display_;
	}

std::ostream& operator<<(std::ostream & out, const Slot & print) {
    if (print.isRevealed() == true) {
        out << print.getLetter() << " ";
    	}
    else {
        out << "_ ";
    	}
    return out;
    }

char Slot::getLetter() const {
    return letter_;
    }

