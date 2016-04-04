
#include "TicTacToe.h"

using namespace std;

TicTacToe::TicTacToe() {
	turn_ = 0;
	squares_[9] = {0x9};
	}

char TicTacToe::getSquareVal(int squareNum) {
	return squares_[squareNum];
	}

void TicTacToe::setSquareVal(int squareNum, char mark) {
	squares_[squareNum-1] = mark;
	}

int TicTacToe::getTurn() {
	return turn_;
	}

void TicTacToe::nextTurn() {
	turn_ += 1;
	}

