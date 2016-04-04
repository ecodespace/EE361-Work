
#include <initializer_list>

using namespace std;

class TicTacToe {
	public:
		TicTacToe();

		char getSquareVal(int squareNum);
		void setSquareVal(int squareNum, char mark);

		int getTurn();
		void nextTurn();

	private:
		int turn_;
		char squares_[9];
	};