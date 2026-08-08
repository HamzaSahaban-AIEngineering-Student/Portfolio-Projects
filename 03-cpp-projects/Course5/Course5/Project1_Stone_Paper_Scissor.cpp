/*
Problem:
Write a small game program for Stone-Paper-Scissor

Requirements:
- Ask for how many rounds the game will be.
- Start each round Player vs Computer.
- Show the results with each round.
- If computer wins the round ring a bell , and screen red.
- If player won the round show green screen.
- After all rounds show game over then print game results,
  then ask the user if s/he want to play again?
*/

/*
	Algorithm: 
	1. We need a function to read positive number. 
	2. we need a function to generate a random number between 1 and 3 . 
	3. We need a function to ask the user to enter their attend from 1, 2, or 3 Stone-Paper-Scissor
	4. We need a function to check who is the winner in each round. 
	5. We need a function to check who is the winner it the overall game. 
	6. we need a function to display the winner in each round 
	7. We need a function to display the overall winner. 
	8. We need a function to restart the game when we finish it.
	9. we need a function to print the game overview at the end 

10. declare an enum for the probabilities Stone-Paper-Scissor
11. declare an enum for the winner: user, computer, draw. 
12. use a struct to have the values of the round info have those info: 
	roundNumber, userChoice, computerChoice, winner, winnerName
13. use a struct to have the values of the overall game results with those info: 
	gameRounds, player1GamesWin, player2GamesWin, DrawTimes, gameWinner, winnerName.

*/

/*
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
	
enum enGameChoice {
	Stone = 1, Paper = 2, Scissor = 3 };

enum enWinner {
	Player1 = 1, Computer = 2, Draw = 3 };

struct stRoundInfo {
	short RoundNumber = 0;
	enGameChoice Player1Choice;
	enGameChoice ComputerChoice;
	enWinner Winner;
	string WinnerName;
};

struct stGameResults {
	short GameRounds = 0;
	short Player1GamesWin = 0;
	short Player2GamesWin = 0;
	short DrawTimes = 0;
	enWinner GameWinner;
	string WinnerName = "";
};

int RandomNumber(int From, int To) {
	int ReadNum = rand() % (To - From + 1) + From;
	return ReadNum;
}

string WinnerName(enWinner Winner) {
	string arrWinnerNames[3] = { "Player1", "Computer", "No Winner (Draw) " };
	return arrWinnerNames[Winner - 1];
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo) {
	if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
		return enWinner::Draw;
	switch (RoundInfo.Player1Choice) {
	case enGameChoice::Stone:
		if (RoundInfo.ComputerChoice == enGameChoice::Paper)
			return enWinner::Computer;
		break;
	case enGameChoice::Paper:
		if (RoundInfo.ComputerChoice == enGameChoice::Scissor)
			return enWinner::Computer;
		break;
	case enGameChoice::Scissor:
		if (RoundInfo.ComputerChoice == enGameChoice::Stone)
			return enWinner::Computer;
		break;
	}
	return enWinner::Player1;
}

string ChoiceName(enGameChoice Choice) {
	string arrGameChoices[3] = { "Stone", "Paper", "Scissor" };
	return arrGameChoices[Choice - 1];
}

void SetWinnerScreenColor(enWinner Winner) {
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

void PrintRoundResults(stRoundInfo roundInfo) {
	cout << "\n_____________Round[" << roundInfo.RoundNumber << "]_____________\n\n";
	cout << "Player1 Choice: " << ChoiceName(roundInfo.Player1Choice) << endl;
	cout << "Computer Choice: " << ChoiceName(roundInfo.ComputerChoice) << endl;
	cout << "Round Winner: [" << roundInfo.WinnerName << "]\n";
	cout << "_________________________________________\n" << endl;
}

enWinner WhoWonTheOverallGame(short Player1WinTimes, short ComputerWinTimes) {
	if (Player1WinTimes > ComputerWinTimes)
		return enWinner::Player1;
	else if (Player1WinTimes < ComputerWinTimes)
		return enWinner::Computer;
	else
		return enWinner::Draw;
}

stGameResults FillGameResults(int GameRounds, short Player1WinTimes, short ComputerWinTimes, short DrawTimes) {
	stGameResults GameResults;
	GameResults.GameRounds = GameRounds;
	GameResults.Player1GamesWin = Player1WinTimes;
	GameResults.Player2GamesWin = ComputerWinTimes;
	GameResults.DrawTimes = DrawTimes;
	GameResults.WinnerName = WhoWonTheOverallGame(Player1WinTimes, ComputerWinTimes);
	GameResults.WinnerName = WinnerName(GameResults.GameWinner);
	return GameResults;
}

enGameChoice ReadPlayer1Choice() {
	short choice;
	do {
		cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";
		cin >> choice;

	} while (choice < 1 || choice >3);
	return (enGameChoice)choice;
}

enGameChoice GetComputerChoice() {
	return (enGameChoice)RandomNumber(1, 3);
}

stGameResults PlayGame(short HowManyRounds) {
	stRoundInfo RoundInfo;
	short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;
	
	for (short GameRound = 1; GameRound <= HowManyRounds;GameRound++) {
		cout << "\nRound [" << GameRound << "] begins:\n";
		RoundInfo.RoundNumber = GameRound;
		RoundInfo.Player1Choice = ReadPlayer1Choice();
		RoundInfo.ComputerChoice = GetComputerChoice();
		RoundInfo.Winner = WhoWonTheRound(RoundInfo);
		RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);
		
		if (RoundInfo.Winner == enWinner::Player1)
			Player1WinTimes++;
		else if (RoundInfo.Winner == enWinner::Computer)
			ComputerWinTimes++;
		else
			DrawTimes++;
		PrintRoundResults(RoundInfo);
	}
	return FillGameResults(HowManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes);
}

string Tabs(short NumberOfTabs) {
	string t = "";
	for (int i = 1; i < NumberOfTabs;i++) {
		t = t + "\t";
		cout << t;
	}
	return t;
}

void ShowGameOverScreen() {
	cout << Tabs(2) << "___________________________________________\n\n";
	cout << Tabs(2) << "                 +++ GAME OVER +++\n";
	cout << Tabs(2) << "___________________________________________\n\n";
}

void ShowFinalGameResult(stGameResults GameResults) {
	cout << Tabs(2) << "______________[GAME RESULTS]________________\n\n";
	cout << "Game Rounds : " << GameResults.GameRounds << endl;
	cout << "Player1 Games Win: " << GameResults.Player1GamesWin << endl;
	cout << "Player2 Games Win: " << GameResults.Player2GamesWin << endl;
	cout << "Draw Times: " << GameResults.DrawTimes << endl;
	cout << "Game Winner: " << GameResults.WinnerName << endl;
	SetWinnerScreenColor(GameResults.GameWinner);
}

short ReadHowManyRounds() {
	short HowManyRounds;
	cout << "How Many Rounds Do Want to play ? ";
	cin >> HowManyRounds;
	return HowManyRounds;
}

void ResetScreen() {
	system("cls");
	system("color 0F");
}

void StartGame() {
	char PlayAgain = 'Y';
	do {
		ResetScreen();
		stGameResults GameResults = PlayGame(ReadHowManyRounds());
		ShowGameOverScreen();
		ShowFinalGameResult(GameResults);
		cout << endl << Tabs(3) << "Do You Want To Play Again? Y/N? ";
		cin >> PlayAgain;
	} while (PlayAgain == 'Y' || PlayAgain == 'y');

}

int main() {
	srand((unsigned)time(NULL));
	StartGame();
	return 0;
}*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum enGameChoice { Stone = 1, Paper = 2, Scissor = 3 };
enum enWinner { Player1 = 1, Computer = 2, Draw = 3 };

struct stRoundInfo {
	short RoundNumber = 0;
	enGameChoice Player1Choice;
	enGameChoice ComputerChoice;
	enWinner Winner;
	string WinnerName;
};

struct stGameResults {
	short GameRounds = 0;
	short Player1GamesWin = 0;
	short Player2GamesWin = 0;
	short DrawTimes = 0;
	enWinner GameWinner;
	string WinnerName = "";
};

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

string WinnerName(enWinner Winner) {
	string arrWinnerNames[3] = { "Player1", "Computer", "No Winner (Draw)" };
	return arrWinnerNames[Winner - 1];
}

enWinner WhoWonTheRound(stRoundInfo RoundInfo) {
	if (RoundInfo.Player1Choice == RoundInfo.ComputerChoice)
		return enWinner::Draw;

	switch (RoundInfo.Player1Choice) {
	case enGameChoice::Stone:
		if (RoundInfo.ComputerChoice == enGameChoice::Paper)
			return enWinner::Computer;
		break;
	case enGameChoice::Paper:
		if (RoundInfo.ComputerChoice == enGameChoice::Scissor)
			return enWinner::Computer;
		break;
	case enGameChoice::Scissor:
		if (RoundInfo.ComputerChoice == enGameChoice::Stone)
			return enWinner::Computer;
		break;
	}
	return enWinner::Player1;
}

string ChoiceName(enGameChoice Choice) {
	string arrGameChoices[3] = { "Stone", "Paper", "Scissor" };
	return arrGameChoices[Choice - 1];
}

void SetWinnerScreenColor(enWinner Winner) {
	switch (Winner) {
	case enWinner::Player1:
		system("color 2F"); // أخضر
		break;
	case enWinner::Computer:
		system("color 4F"); // أحمر
		cout << "\a";       // صوت التنبيه (Bell)
		break;
	case enWinner::Draw:
		system("color 6F"); // أصفر
		break;
	}
}

void PrintRoundResults(stRoundInfo roundInfo) {
	cout << "\n_____________Round[" << roundInfo.RoundNumber << "]_____________\n\n";
	cout << "Player1 Choice: " << ChoiceName(roundInfo.Player1Choice) << endl;
	cout << "Computer Choice: " << ChoiceName(roundInfo.ComputerChoice) << endl;
	cout << "Round Winner: [" << roundInfo.WinnerName << "]\n";
	cout << "_________________________________________\n" << endl;
}

enWinner WhoWonTheOverallGame(short Player1WinTimes, short ComputerWinTimes) {
	if (Player1WinTimes > ComputerWinTimes)
		return enWinner::Player1;
	else if (Player1WinTimes < ComputerWinTimes)
		return enWinner::Computer;
	else
		return enWinner::Draw;
}

stGameResults FillGameResults(int GameRounds, short Player1WinTimes, short ComputerWinTimes, short DrawTimes) {
	stGameResults GameResults;
	GameResults.GameRounds = GameRounds;
	GameResults.Player1GamesWin = Player1WinTimes;
	GameResults.Player2GamesWin = ComputerWinTimes;
	GameResults.DrawTimes = DrawTimes;

	// إصلاح الخطأ: تعيين enum الفائز أولاً ثم تعيين اسمه
	GameResults.GameWinner = WhoWonTheOverallGame(Player1WinTimes, ComputerWinTimes);
	GameResults.WinnerName = WinnerName(GameResults.GameWinner);

	return GameResults;
}

enGameChoice ReadPlayer1Choice() {
	short choice;
	do {
		cout << "\nYour Choice: [1]:Stone, [2]:Paper, [3]:Scissors? ";
		cin >> choice;
	} while (choice < 1 || choice > 3);
	return (enGameChoice)choice;
}

enGameChoice GetComputerChoice() {
	return (enGameChoice)RandomNumber(1, 3);
}

stGameResults PlayGame(short HowManyRounds) {
	stRoundInfo RoundInfo;
	short Player1WinTimes = 0, ComputerWinTimes = 0, DrawTimes = 0;

	for (short GameRound = 1; GameRound <= HowManyRounds; GameRound++) {
		cout << "\nRound [" << GameRound << "] begins:\n";
		RoundInfo.RoundNumber = GameRound;
		RoundInfo.Player1Choice = ReadPlayer1Choice();
		RoundInfo.ComputerChoice = GetComputerChoice();
		RoundInfo.Winner = WhoWonTheRound(RoundInfo);
		RoundInfo.WinnerName = WinnerName(RoundInfo.Winner);

		if (RoundInfo.Winner == enWinner::Player1)
			Player1WinTimes++;
		else if (RoundInfo.Winner == enWinner::Computer)
			ComputerWinTimes++;
		else
			DrawTimes++;

		// إصلاح: تغيير لون الشاشة وتفعيل الصوت لكل جولة
		SetWinnerScreenColor(RoundInfo.Winner);
		PrintRoundResults(RoundInfo);
	}
	return FillGameResults(HowManyRounds, Player1WinTimes, ComputerWinTimes, DrawTimes);
}

// إصلاح: إرجاع نص المسافات بدون طباعة داخلية تخرب المخرجات
string Tabs(short NumberOfTabs) {
	string t = "";
	for (int i = 0; i < NumberOfTabs; i++) {
		t += "\t";
	}
	return t;
}

void ShowGameOverScreen() {
	cout << Tabs(2) << "___________________________________________\n\n";
	cout << Tabs(2) << "                 +++ GAME OVER +++\n";
	cout << Tabs(2) << "___________________________________________\n\n";
}

void ShowFinalGameResult(stGameResults GameResults) {
	cout << Tabs(2) << "______________[GAME RESULTS]________________\n\n";
	cout << Tabs(2) << "Game Rounds        : " << GameResults.GameRounds << endl;
	cout << Tabs(2) << "Player1 Games Win  : " << GameResults.Player1GamesWin << endl;
	cout << Tabs(2) << "Computer Games Win : " << GameResults.Player2GamesWin << endl;
	cout << Tabs(2) << "Draw Times         : " << GameResults.DrawTimes << endl;
	cout << Tabs(2) << "Game Winner        : " << GameResults.WinnerName << endl;
	cout << Tabs(2) << "____________________________________________\n";

	SetWinnerScreenColor(GameResults.GameWinner);
}

short ReadHowManyRounds() {
	short HowManyRounds = 1;
	do {
		cout << "How Many Rounds Do You Want to play (1 to 10)? ";
		cin >> HowManyRounds;
	} while (HowManyRounds < 1 || HowManyRounds > 10);

	return HowManyRounds;
}

void ResetScreen() {
	system("cls");
	system("color 0F");
}

void StartGame() {
	char PlayAgain = 'Y';
	do {
		ResetScreen();
		stGameResults GameResults = PlayGame(ReadHowManyRounds());
		ShowGameOverScreen();
		ShowFinalGameResult(GameResults);
		cout << endl << Tabs(2) << "Do You Want To Play Again? Y/N? ";
		cin >> PlayAgain;
	} while (PlayAgain == 'Y' || PlayAgain == 'y');
}

int main() {
	srand((unsigned)time(NULL));
	StartGame();
	return 0;
}

