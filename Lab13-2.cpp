//Lab13-2.cpp - Guess the Word game
//Created/revised by Dakotah Jones on 12/10/23

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string origWord = "";
	string letter = "";
	char dashReplaced = 'N';
	char gameOver = 'N';
	int numIncorrect = 0;
	string displayWord = "-----";

	//get original word
	while (origWord.length() != 5)
	{
		cout << "Enter a 5-letter word in uppercase: ";
		getline(cin, origWord);
	} //end while

	system("cls"); //clear screen

	//start guessing
	cout << "Guess this word: " <<
		displayWord << endl;
	while (gameOver == 'N')
	{
		cout << "Enter an uppercase letter: ";
		cin >> letter;

		//searc for the letter in the original word
		for (int x = 0; x < 5; x += 1)
		{
			//if the current char matches the letter, replace the corresponding dash in the displayWord variable
			// and then set the dashReplaced variable to 'Y'
			if (origWord.substr(x, 1) == letter)
			{
				displayWord.replace(x, 1, letter);
				dashReplaced = 'Y';
			} //end if
		} //end for
		//if a dash was replaced, check whether the //display word variable contains another dash
		if (dashReplaced == 'Y')
		{
			//if the displayWord variable does not contain any dashes the game is over
			if (displayWord.find("-", 0) == -1)
			{
				gameOver = 'Y';
				cout << endl << "Yes, the word is "
					<< origWord << endl;
				cout << "Great guessing!" << endl;
			}
			else //otherwise, continue guessing
			{
				cout << endl << "Guess this word: "
					<< displayWord << endl;
				dashReplaced = 'N';
			} //end if
		}
		else //processed when dashReplaced contains 'N'
		{
			//add 1 to the number of incorrect guess
			numIncorrect += 1;
			//if the number of incorrect guessing is 10, the game is over
			if (numIncorrect == 10)
			{
				gameOver = 'Y';
				cout << endl << "Sorry, the word is "
					<< origWord << endl;
			} //end if
		} //end if
	} //end while
	return 0;
} //end of main function