
#include <iostream>
#include "TicTacToe.h"

using namespace std;

void displayGame(TicTacToe game);

bool xWin(TicTacToe game);
bool oWin(TicTacToe game);

int main() {
	cout << "Welcome to Tic Tac Toe!" << endl;
	cout << "Place marks by specifying a square number:" << endl;
	cout << "1|2|3" << endl << "4|5|6" << endl << "7|8|9" << endl;

	TicTacToe game;
	char mark;

	while (game.getTurn() < 9) {
		if (xWin(game)) { //If X has won
			cout << "Game over: X wins!" << endl; 
			break;
			}
		else if (oWin(game)) { //If O has won
			cout << "Game over: O wins!" << endl;
			break;
			}
		else { //If neither player has won
			displayGame(game);

			if (game.getTurn() % 2 == 0) { //Even turns are X's turn 
				mark = 'X';
				}
			else { //Odd turns are O's turn
				mark = 'O';
				}

			cout << mark << "'s turn: where would you like to place a mark?";

			int markLocation;
			std::cin >> markLocation;
			
			if (game.getSquareVal(markLocation-1) != 'X' && game.getSquareVal(markLocation) != 'O')
				game.setSquareVal(markLocation, mark);
		
			}
		game.nextTurn();
		}

	cout << endl << "Press any key to exit: " << endl;
	getchar();

	return 0;
	}

void displayGame(TicTacToe game) {
	char mark;
	for (int ix = 0; ix < 9; ++ix) {
		mark = game.getSquareVal(ix);
		if (mark == 'X' || mark == 'O')
			cout << mark;
		else
			cout << " ";

		if ( (ix+1) % 3 != 0)
			cout << "|";
		else
			cout << endl;
		}
	cout << endl;
	}

/*WIN CONDITIONS:
ACROSS:
X|X|X		 | |		 | |
| |	or	X|X|X	or   | |	(123) or (456) or (789)
| |		 | |		X|X|X

VERTICAL:
X| |		 |X|		 | |X
X| |	or	 |X|	or	 | |X	(147) or (258) or (369)
X| |		 |X|		 | |X

DIAGONAL:
X| |		 | |X
|X|	or	 |X|				(159) or (753)
| |X		X| |
*/

bool xWin(TicTacToe game) {
	bool win = false;

	if (game.getSquareVal(0) == 'X' && game.getSquareVal(1) == 'X' && game.getSquareVal(2) == 'X') //Across win, first row
		win = true;
	else if (game.getSquareVal(3) == 'X' && game.getSquareVal(4) == 'X' && game.getSquareVal(5) == 'X') //Across win, second row
		win = true;
	else if (game.getSquareVal(6) == 'X' && game.getSquareVal(7) == 'X' && game.getSquareVal(8) == 'X') //Across win, third row
		win = true;
	else if (game.getSquareVal(0) == 'X' && game.getSquareVal(3) == 'X' && game.getSquareVal(6) == 'X') //Vertical win, first column
		win = true;
	else if (game.getSquareVal(1) == 'X' && game.getSquareVal(4) == 'X' && game.getSquareVal(7) == 'X') //Vertical win, second column
		win = true;
	else if (game.getSquareVal(2) == 'X' && game.getSquareVal(5) == 'X' && game.getSquareVal(8) == 'X') //Vertical win, third column
		win = true;
	else if (game.getSquareVal(0) == 'X' && game.getSquareVal(4) == 'X' && game.getSquareVal(8) == 'X') //Diagonal win, top left to bottom right
		win = true;
	else if (game.getSquareVal(6) == 'X' && game.getSquareVal(4) == 'X' && game.getSquareVal(2) == 'X') //Diagonal win, bottom left to top right
		win = true;

	return win;
	}

bool oWin(TicTacToe game) {
	bool win = false;

	if (game.getSquareVal(0) == 'O' && game.getSquareVal(1) == 'O' && game.getSquareVal(2) == 'O') //Across win, first row
		win = true;
	else if (game.getSquareVal(3) == 'O' && game.getSquareVal(4) == 'O' && game.getSquareVal(5) == 'O') //Across win, second row
		win = true;
	else if (game.getSquareVal(6) == 'O' && game.getSquareVal(7) == 'O' && game.getSquareVal(8) == 'O') //Across win, third row
		win = true;
	else if (game.getSquareVal(0) == 'O' && game.getSquareVal(3) == 'O' && game.getSquareVal(6) == 'O') //Vertical win, first column
		win = true;
	else if (game.getSquareVal(1) == 'O' && game.getSquareVal(4) == 'O' && game.getSquareVal(7) == 'O') //Vertical win, second column
		win = true;
	else if (game.getSquareVal(2) == 'O' && game.getSquareVal(5) == 'O' && game.getSquareVal(8) == 'O') //Vertical win, third column
		win = true;
	else if (game.getSquareVal(0) == 'O' && game.getSquareVal(4) == 'O' && game.getSquareVal(8) == 'O') //Diagonal win, top left to bottom right
		win = true;
	else if (game.getSquareVal(6) == 'O' && game.getSquareVal(4) == 'O' && game.getSquareVal(2) == 'O') //Diagonal win, bottom left to top right
		win = true;

	return win;
	}