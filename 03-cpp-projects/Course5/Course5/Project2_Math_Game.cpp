/*
Project Requirements (Math Game):
- Ask the user how many questions they want to answer.
- Ask the user for the questions level: [1] Easy, [2] Med, [3] Hard, [4] Mix.
- Ask the user for the operation type: [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix.
- Generate questions dynamically based on the selected level and operation type.
- Display each question, track the user's answers, and validate them.
- Change screen color to green for correct answers and red for wrong answers
	(with a sound alert for wrong answers).
- Show the final results screen at the end indicating whether the player passed or failed,
	along with game statistics.
- Ask the user if they want to play again (Y/N) and restart the game if yes.
*/

/*
How Many Questions do you want to answer ? 5
Enter Questions Level [1] Easy, [2] Med, [3] Hard, [4] Mix ? 1
Enter Operation Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix ? 5

Question [1/5]
6
10 /
0
Right Answer :-)

Question [2/5]
3
1 /
5
Wrong Answer :-(
The right answer is: 3

Question [3/5]
8
10 /
0
Right Answer :-)

Question [4/5]
3
7 +
8
Wrong Answer :-(
The right answer is: 10

Question [5/5]
2
6 *
12
Right Answer :-)

Final Results IS PASS :-)

Number of Questions : 5
Questions Level     : Easy
OpType              : Mix
Number of Right Answers: 3
Number of Wrong Answers: 2

Do you want to play again? Y/N?
*/

/*
1.  we need an enum for the questions leveles 
2.  we need an enum for the operation types 
3.  we need a struct for the question info 
4.  we need a struct for the over all game info 
5.  we need a function to generate a random number between 1 to 4 for the levels and 1 to 5 for the operations
6.  we need a function to ask the user how many question do they need to answer
8.  we need a function to generate random sum question
9.  we need a function to generate random sub question
10. we need a function to generate random mul question
11. we need a function to generate random div question
12. we need a function to generate random mix question

13. we need a function to check the answers
14. we need a function to call these function according to the user's request

15. we need a function to have the user answers

16. we need a function to fill the round results 
17. we need a function to fill the overall game results 
18. we need a function to print the game over screen 
19. we need a function to print the round results after each question
20. we need a function to print the overall game results 
21. we need a funntion to change the system color acoarding to the user's answer
22. we need a function to reset the screen
23. we need a function to to ask the user if they want to play again
*/

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

enum enQuestionsLevels 
{
	Easy = 1, Med = 2, Hard = 3, Mix = 4
};

enum enOperationTypes
{
	Add = 1, Sub = 2, Mul = 3, Div = 4, Mix = 5
};

struct stQuestionsInfo {
	enQuestionsLevels QuestionsLevels;
	enOperationTypes OperationType;
	short QustionNumber = 0;
	int Operant1 = 0;
	int Operant2 = 0;
	int UserAnswer = 0;
	int RigthAnswer = 0;
	bool IsRight = false;
};

struct stGameResults {
	enQuestionsLevels QuestionsLevels;
	enOperationTypes OperationTypes;
	int NumberOfQuestions = 0;
	int UserRigthAnwers = 0;
	int UserWrongAnswers = 0;
	bool GameResults = false;
};

int RandomNumber(int From, int To) {
	return rand() % (To - From + 1) + From;
}

int HowManyQuestion() {
	int numberOfQuestions = 0;
	do {
		cout << "\nHow many questions do you want to answer?? ";
		cin >> numberOfQuestions;

	} while (numberOfQuestions < 1 || numberOfQuestions > 10);
	return numberOfQuestions;
}

void GenerateQuestionOperands(enQuestionsLevels QuestionsLevels, stQuestionsInfo& QuestionInfo) {
	switch (QuestionsLevels) {
	case enQuestionsLevels::Easy:
		QuestionInfo.Operant1 = RandomNumber(1, 10);
		QuestionInfo.Operant2 = RandomNumber(1, 10);
		break;
	case enQuestionsLevels::Med:
		QuestionInfo.Operant1 = RandomNumber(11, 50);
		QuestionInfo.Operant2 = RandomNumber(11, 50);
		break;
	case enQuestionsLevels::Hard:
		QuestionInfo.Operant1 = RandomNumber(51, 100);
		QuestionInfo.Operant2 = RandomNumber(51, 100);
		break;
	case enQuestionsLevels::Mix:
		int RandomLevel = RandomNumber(1, 3);
		if (RandomLevel == enQuestionsLevels::Easy) {
			QuestionInfo.Operant1 = RandomNumber(1, 10);
			QuestionInfo.Operant2 = RandomNumber(1, 10);
		}
		else if (RandomLevel == enQuestionsLevels::Med) {
			QuestionInfo.Operant1 = RandomNumber(11, 50);
			QuestionInfo.Operant2 = RandomNumber(11, 50);
		}
		else {
			QuestionInfo.Operant1 = RandomNumber(51, 100);
			QuestionInfo.Operant2 = RandomNumber(51, 100);
		}
		break;
	}
}

void GenerateRandomSumQuestion(enQuestionsLevels QuestionsLevels, stQuestionsInfo &QuestionInfo) {
	GenerateQuestionOperands(QuestionsLevels, QuestionInfo);
	QuestionInfo.RigthAnswer = QuestionInfo.Operant1 + QuestionInfo.Operant2;
}

void GenerateRandomSubQuestion(enQuestionsLevels QuestionsLevels, stQuestionsInfo& QuestionInfo) {
	GenerateQuestionOperands(QuestionsLevels, QuestionInfo);
	QuestionInfo.RigthAnswer = QuestionInfo.Operant1 - QuestionInfo.Operant2;
}

void GenerateRandomMulQuestion(enQuestionsLevels QuestionsLevels, stQuestionsInfo& QuestionInfo) {
	GenerateQuestionOperands(QuestionsLevels, QuestionInfo);
	QuestionInfo.RigthAnswer = QuestionInfo.Operant1 * QuestionInfo.Operant2;
}

void GenerateRandomDivQuestion(enQuestionsLevels QuestionsLevels, stQuestionsInfo& QuestionInfo) {
	do {
		GenerateQuestionOperands(QuestionsLevels, QuestionInfo);
	} while (QuestionInfo.Operant2 == 0);
	QuestionInfo.RigthAnswer = QuestionInfo.Operant1 / QuestionInfo.Operant2;
}

enQuestionsLevels ReadUserLevel() {
	short Choice = 0;
	do {
		cout << "\nEnter Questions Level [1] Easy, [2] Med, [3] Hard, [4] Mix ? ";
		cin >> Choice;
	} while (Choice > 4 || Choice < 1);
	return (enQuestionsLevels)Choice;
}

enOperationTypes ReadUserOperationType() {
	short Choice = 0;
	do {
		cout << "\nEnter Operation Type [1] Add, [2] Sub, [3] Mul, [4] Div, [5] Mix ? ";
		cin >> Choice;
	} while (Choice > 5 || Choice < 1);
	return (enOperationTypes)Choice;
}

void GenerateQuestion(enQuestionsLevels QuestionsLevels,enOperationTypes OperationTypes, stQuestionsInfo &QuestionInfo) {
	switch (OperationTypes) {
	case enOperationTypes::Add:
		GenerateRandomSumQuestion(QuestionsLevels, QuestionInfo);
		break;
	case enOperationTypes::Sub:
		GenerateRandomSubQuestion(QuestionsLevels, QuestionInfo);
		break;
	case enOperationTypes::Mul:
		GenerateRandomMulQuestion(QuestionsLevels, QuestionInfo);
		break;
	case enOperationTypes::Div:
		GenerateRandomDivQuestion(QuestionsLevels, QuestionInfo);
		break;
	case enOperationTypes::Mix:
		OperationTypes = (enOperationTypes)RandomNumber(1, 4);
		if (OperationTypes == enOperationTypes::Add)
			GenerateRandomSumQuestion(QuestionsLevels, QuestionInfo);
		else if (OperationTypes == enOperationTypes::Sub)
			GenerateRandomSubQuestion(QuestionsLevels, QuestionInfo);
		else if (OperationTypes == enOperationTypes::Mul)
			GenerateRandomMulQuestion(QuestionsLevels, QuestionInfo);
		else
			GenerateRandomDivQuestion(QuestionsLevels, QuestionInfo);
		break;
	}
	QuestionInfo.OperationType = OperationTypes;
}

bool IsRigthAnswer(stQuestionsInfo& QuestionInfo) {
	if (QuestionInfo.UserAnswer == QuestionInfo.RigthAnswer){
		QuestionInfo.IsRight = true;
		return true;
	}
	else
	{
		QuestionInfo.IsRight = false;
		return false;
	}
}

void ChangeSystemColor(stQuestionsInfo& QuestionInfo) {
	if (QuestionInfo.IsRight)
		system("color 2F");
	else
		system("color 4F");
}

void PrintGameOver() {
	cout << "\t\t\t_________________________________________________\n";
	cout << "\t\t\t                           +++ GAME OVER +++          \n";
	cout << "\t\t\t_________________________________________________\n";
}

stQuestionsInfo FillRoundInfo(stQuestionsInfo& QuestionInfo) {
	if (QuestionInfo.UserAnswer == QuestionInfo.RigthAnswer) {
		QuestionInfo.IsRight = true;
	}
	else {
		QuestionInfo.IsRight = false;
	}
	return QuestionInfo;
}

stGameResults FillGameResults(stGameResults GameResults, stQuestionsInfo QuestionInfo) {
	if(QuestionInfo.IsRight)
		GameResults.UserRigthAnwers++;
	else 
		GameResults.UserWrongAnswers++;
	
	if (GameResults.UserRigthAnwers >= GameResults.UserWrongAnswers)
		GameResults.GameResults = true;
	else
		GameResults.GameResults = false;

	return GameResults;
}

void PrintRoundResults(stQuestionsInfo &QuestionInfo) {
	cout << "\n__________________Round[" << QuestionInfo.QustionNumber<< "]_____________\n\n";
	cout << "The Firs Operant   : " << QuestionInfo.Operant1 << endl;
	cout << "The Second Operant : " << QuestionInfo.Operant2 << endl;
	cout << "The Operation Type : " << QuestionInfo.OperationType << endl;
	cout << "The Question Level : " << QuestionInfo.QuestionsLevels << endl;
	cout << "The User Answer    : " << QuestionInfo.UserAnswer << endl;
	cout << "The Rigth Answer   : " << QuestionInfo.RigthAnswer << endl;
	if (QuestionInfo.IsRight == true)
		cout << "Wrigh Answer :-) " << endl;
	else {
		cout << "Wrong Answer :-( " << endl;
		cout << "The Right Answer is " << QuestionInfo.RigthAnswer << endl;
	}
}

int main() {
	enQuestionsLevels QuestionLevels;
	enOperationTypes OperationTypes;
	stQuestionsInfo QuestionInfo;

	GenerateQuestion(QuestionLevels, OperationTypes, QuestionInfo);
}
