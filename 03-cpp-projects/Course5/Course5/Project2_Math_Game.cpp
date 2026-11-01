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
#include <iostream>   // Include iostream for input/output operations.
#include <cstdlib>    // Include cstdlib for system functions like clearing the screen.
#include <ctime>      // Include ctime for random number seeding.
using namespace std;  // Use the standard namespace to avoid prefixing std:: before standard functions.

// Enumeration: enQuestionsLevel
// Purpose: Defines the difficulty levels available for quiz questions.
enum enQuestionsLevel { EasyLevel = 1, MedLevel = 2, HardLevel = 3, Mix = 4 };

// Enumeration: enOperationType
// Purpose: Defines the types of arithmetic operations used in the quiz.
enum enOperationType { Add = 1, Sub = 2, Mult = 3, Div = 4, MixOp = 5 };

// Function: RandomNumber
// Purpose: Generates a random number within the given range [From, To].
// Parameters:
//   - From: Lower bound of the random range.
//   - To: Upper bound of the random range.
// Returns: A random integer between From and To.
int RandomNumber(int From, int To)
{
    return rand() % (To - From + 1) + From;
}

// Function: GetOpTypeSymbol
// Purpose: Converts an operation type to its corresponding symbol.
// Parameters:
//   - OpType: The arithmetic operation type.
// Returns: A string representation of the operator.
string GetOpTypeSymbol(enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return "+";
    case enOperationType::Sub:
        return "-";
    case enOperationType::Mult:
        return "x";
    case enOperationType::Div:
        return "/";
    default:
        return "Mix";
    }
}

// Function: GetRandomOperationType
// Purpose: Generates a random arithmetic operation type.
// Returns: A random enOperationType value.
enOperationType GetRandomOperationType()
{
    return (enOperationType)RandomNumber(1, 4);
}

// Function: GetQuestionLevelText
// Purpose: Converts an enQuestionsLevel enum to a string representation.
// Parameters:
//   - QuestionLevel: The selected difficulty level.
// Returns: A string representation of the difficulty level.
string GetQuestionLevelText(enQuestionsLevel QuestionLevel)
{
    string arrQuestionLevelText[4] = { "Easy","Medium","Hard","Mixed" };
    return arrQuestionLevelText[QuestionLevel - 1];
}

// Function: SetScreenColor
// Purpose: Changes the console screen color based on answer correctness.
// Parameters:
//   - Right: Boolean value indicating if the answer is correct.
void SetScreenColor(bool Right)
{
    if (Right)
        system("color 2F"); // Green for correct answers.
    else
    {
        system("color 4F"); // Red for incorrect answers.
        cout << "\a"; // Plays an alert sound.
    }
}

// Function: SimpleCalculator
// Purpose: Performs the selected arithmetic operation on two numbers.
// Parameters:
//   - Number1: First operand.
//   - Number2: Second operand.
//   - OpType: The operation type (Add, Sub, Mult, or Div).
// Returns: The result of the operation.
int SimpleCalculator(int Number1, int Number2, enOperationType OpType)
{
    switch (OpType)
    {
    case enOperationType::Add:
        return Number1 + Number2;
    case enOperationType::Sub:
        return Number1 - Number2;
    case enOperationType::Mult:
        return Number1 * Number2;
    case enOperationType::Div:
        return (Number2 != 0) ? (Number1 / Number2) : 0;  // Avoid division by zero.
    default:
        return Number1 + Number2;
    }
}

// Structure: stQuestion
// Purpose: Stores information for a single quiz question.
struct stQuestion
{
    int Number1 = 0;
    int Number2 = 0;
    enOperationType OperationType;
    enQuestionsLevel QuestionLevel;
    int CorrectAnswer = 0;
    int PlayerAnswer = 0;
    bool AnswerResult = false;
};

// Structure: stQuizz
// Purpose: Stores details of the entire quiz session.
struct stQuizz
{
    stQuestion QuestionList[100];
    short NumberOfQuestions;
    enQuestionsLevel QuestionsLevel;
    enOperationType OpType;
    short NumberOfWrongAnswers = 0;
    short NumberOfRightAnswers = 0;
    bool isPass = false;
};

// Function: GenerateQuestion
// Purpose: Creates a random math question based on difficulty and operation type.
stQuestion GenerateQuestion(enQuestionsLevel QuestionLevel, enOperationType OpType)
{
    stQuestion Question;

    if (QuestionLevel == enQuestionsLevel::Mix)
        QuestionLevel = (enQuestionsLevel)RandomNumber(1, 3);

    if (OpType == enOperationType::MixOp)
        OpType = GetRandomOperationType();

    Question.OperationType = OpType;

    switch (QuestionLevel)
    {
    case enQuestionsLevel::EasyLevel:
        Question.Number1 = RandomNumber(1, 10);
        Question.Number2 = RandomNumber(1, 10);
        break;
    case enQuestionsLevel::MedLevel:
        Question.Number1 = RandomNumber(10, 50);
        Question.Number2 = RandomNumber(10, 50);
        break;
    case enQuestionsLevel::HardLevel:
        Question.Number1 = RandomNumber(50, 100);
        Question.Number2 = RandomNumber(50, 100);
        break;
    }

    Question.CorrectAnswer = SimpleCalculator(Question.Number1, Question.Number2, Question.OperationType);
    Question.QuestionLevel = QuestionLevel;

    return Question;
}

// Function: AskAndCorrectQuestionListAnswers
// Purpose: Iterates through quiz questions, evaluates answers, and provides feedback.
void AskAndCorrectQuestionListAnswers(stQuizz& Quizz)
{
    for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
    {
        cout << "\nQuestion [" << QuestionNumber + 1 << "/" << Quizz.NumberOfQuestions << "]\n";
        cout << Quizz.QuestionList[QuestionNumber].Number1 << " "
            << GetOpTypeSymbol(Quizz.QuestionList[QuestionNumber].OperationType) << " "
            << Quizz.QuestionList[QuestionNumber].Number2 << " = ";

        cin >> Quizz.QuestionList[QuestionNumber].PlayerAnswer;

        if (Quizz.QuestionList[QuestionNumber].PlayerAnswer == Quizz.QuestionList[QuestionNumber].CorrectAnswer)
        {
            cout << "Correct!\n";
            Quizz.NumberOfRightAnswers++;
        }
        else
        {
            cout << "Wrong! Correct Answer: " << Quizz.QuestionList[QuestionNumber].CorrectAnswer << endl;
            Quizz.NumberOfWrongAnswers++;
        }
    }

    Quizz.isPass = (Quizz.NumberOfRightAnswers >= Quizz.NumberOfWrongAnswers);
}

// Function: PlayMathGame
// Purpose: Initializes the quiz, generates questions, and manages the quiz flow.
void PlayMathGame()
{
    stQuizz Quizz;
    Quizz.NumberOfQuestions = 5;  // Set a fixed number of questions.
    Quizz.QuestionsLevel = enQuestionsLevel::EasyLevel;
    Quizz.OpType = enOperationType::MixOp;

    for (short QuestionNumber = 0; QuestionNumber < Quizz.NumberOfQuestions; QuestionNumber++)
    {
        Quizz.QuestionList[QuestionNumber] = GenerateQuestion(Quizz.QuestionsLevel, Quizz.OpType);
    }

    AskAndCorrectQuestionListAnswers(Quizz);

    cout << "\nQuiz Completed! Right Answers: " << Quizz.NumberOfRightAnswers
        << ", Wrong Answers: " << Quizz.NumberOfWrongAnswers << "\n";

    cout << (Quizz.isPass ? "You Passed the Quiz!\n" : "You Failed the Quiz!\n");
}

// Main Function
int main()
{
    srand((unsigned)time(NULL));  // Seed the random number generator.
    PlayMathGame();  // Start the quiz game.
    return 0;  // Exit the program successfully.
}
