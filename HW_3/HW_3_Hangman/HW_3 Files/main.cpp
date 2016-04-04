#include <iostream>
#include <string.h>
#include "LinkList.h"

using namespace std;

int main() {

    enum HUNG_STATE { PLATFORM, HEAD, BODY, LEFT_ARM, RIGHT_ARM, LEFT_LEG, RIGHT_LEG, HUNG };
    HUNG_STATE hanged = PLATFORM;

    LinkList word;
    char raw_word[255] = "Antelope"; //CHANGE WORD HERE

    for (int i = 0; i < strlen(raw_word); i++) {
        char c = raw_word[i];
        Slot letter(c);
        word.Insert(letter);
        }

    LinkList pickedLetters;

    cout << "Welcome to Hangman!\n" << endl;

    while (hanged != HUNG) { // While the player is not yet 'hanged'
        cout << "The word is now:\n";
        word.Print(); //Print the word; letters will be displayed as chars or blanks

        cout << "The letters you have guessed are:\n";
        pickedLetters.Print();

        cout << "Please enter a letter to guess:" << endl;
        char guess = getchar(); // Take user input for next letter to guess

        pickedLetters.Insert(guess); // Store the entered letter as being guessed

        if (word.RevealLetters()) { //If letters are revealed...
        	cout << "Good guess!\n";
        	}
        else { //If no letters are revealed...
        	++hanged; //Increase hanged status
        	if (hanged != HUNG) { // If the player is not yet 'hanged'...
        		cout << "Try again!\n";
        		}
        	else { // The player is hanged!
        		cout << "Sorry, you've lost!\n";
        		}
        	}
        }

    }
