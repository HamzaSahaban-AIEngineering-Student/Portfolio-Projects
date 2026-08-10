/*
1. enum for the choice types 
2. enum for the winner types
3. struct for the round info 
4. struct for the winner info 
5. function to read how many rounds 
6. funttion to read player1 choice 
7. function to check computer choice 
8. function to generate a random number between 1 and 3 
9. funtion to reset the game 
10.funtion to change the screen colors 
function to display the game over 
function to check the winner in each round 
function to check the overall game's winner 
function print the final game results 
function to call every think to start the round 
function to start the game from zero to the end. 
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

enum enChoices 
{
	Stone = 1, Paper = 2, Scissor = 3
};

enum enWinner
{
	Player1 = 1, Computer = 2, Draw = 3
};

struct stRoundInfo {
	short RoundNumber = 0;
	enChoices Player1Choice;
	enChoices ComputerChoice;
	enWinner Winner;
	string WinnerName;
};

struct stGameResults {
	short GameRounds = 0;
	short Player1WinTimes = 0;
	short ComputerWinTimes = 0;
	short DrawTimes = 0;
	enWinner Winner;
	string WinnerName = "";
};

string WinnerName(enWinner Winner) {
	string arrWinnerNames[3] = { "Player1", "Computer", "Draw" };
	return arrWinnerNames[Winner - 1];
}

string ChoiceName(enChoices Choice){
	string arrChoices[3] = { "Stone", "Paper", "Scissor" };
	return arrChoices[Choice - 1];
}

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

int HowManyRounds() {
	int Rounds = 0;
	do {
		cout << "How many rounds do you wnat to play (1 to 10)? ";
		cin >> Rounds;
	} while (Rounds < 1 || Rounds >10);
	return Rounds;
}

enChoices ReadPlayer1Choice() {
	short Choice;
	do {
		cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";
		cin >> Choice;
	} while (Choice < 1 || Choice>3);
	return (enChoices)Choice;
}

enChoices GetComputerChoice() {
	return (enChoices)RandomNumber(1, 3);
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo) {
	if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
		return enWinner::Draw;

	switch (RoundInfo.Player1Choice) {
	case enChoices::Stone:
		if (RoundInfo.ComputerChoice == enChoices::Paper)
			return enWinner::Computer;
		break;
	case enChoices::Paper:
		if (RoundInfo.ComputerChoice == enChoices::Stone)
			return enWinner::Computer;
		break;
	case enChoices::Scissor:
		if (RoundInfo.ComputerChoice == enChoices::Stone)
			return enWinner::Computer;
		break;
	}
	return enWinner::Player1;
}

enWinner WhoWonTheGame(short Player1WinTimes, short ComputerWinTimes) {
	if (Player1WinTimes > ComputerWinTimes)
		return enWinner::Player1;
	else if (Player1WinTimes < ComputerWinTimes)
		return enWinner::Computer;
	else
		return enWinner::Draw;
}

void PrintRoundResults(stRoundInfo RoundInfo) {
	cout << "\n__________________Round[" << RoundInfo.RoundNumber << "]_____________\n\n";
	cout << "Player1 Choice: " << RoundInfo.Player1Choice << endl;
	cout << "Computer Choice: " << RoundInfo.ComputerChoice << endl;
	cout << "Round Winner: " << RoundInfo.WinnerName << endl;
	cout << "_______________________________________\n";
}

void ResetScreen() {
	system("cls");
	system("color 0F");
}

void SetScreenColor(enWinner Winner) {
	switch (Winner) {
	case enWinner::Player1:
		system("color 2F");
		break;
	case enWinner::Computer:
		system("color 4F");
		cout << "\a";
		break;
	case enWinner::Draw:
		system("color 6F");
		break;
	}
}

void PrintGameOver() {
	cout << "\t\t\t_________________________________________________\n";
	cout << "\t\t\t                           +++ GAME OVER +++          \n";
	cout << "\t\t\t_________________________________________________\n";
}

void ShowGameResults(stGameResults GameResults) {
	cout << "\n\t\t\t______________[GAME RESULTS]________________";
	cout << "\n\t\t\tGame Rounds       : " << GameResults.GameRounds << endl;
	cout << "\n\t\t\tPlayer1 Games Win : " << GameResults.Player1WinTimes << endl;
	cout << "\n\t\t\tComputer Games Win: " << GameResults.ComputerWinTimes << endl;
	cout << "\n\t\t\tDraw Times        : " << GameResults.DrawTimes << endl;
	cout << "\n\t\t\tGame Winner       : " << GameResults.WinnerName << endl;
	cout << "\n\t\t\t______________________________________________\n";

}

stGameResults PlayGame(short HowManyRounds) {
	stRoundInfo RoundInfo;
	short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

}

void StartGame() {

}