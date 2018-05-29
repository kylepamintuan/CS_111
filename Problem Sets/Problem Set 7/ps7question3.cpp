#include <iostream>
#include <string>
using namespace std;

//Write the program described on page 446 - question 9.  The question is titled "Driver's License Exam".

int main()
{
    //Correct Answers
    char answer_key[20] = {'B', 'D', 'A', 'A', 'C', 'A', 'B', 'A', 'C', 'D', 'B', 'C', 'D',
                      'A', 'D', 'C', 'C', 'B', 'D', 'A'};

    //Variables
    char answer_list[20];
    int right_answers = 0;
    int wrong_answers = 0;
    char wrong = 'N'; //store an N for every wrong answer
    char right = 'Y'; //store an Y for every right answer


    //Title
    cout << "Driver's License Exam Grader" << endl;

    //User Input
    for(int counter = 0; counter < 20; counter++)
    {
        cout << "Enter your answer for question " << (counter + 1) << endl;
        cin >> answer_list[counter];

        //"While" loop for when user inputs invalid answer
        while (answer_list[counter] != 'A' && answer_list[counter] != 'B' && answer_list[counter] != 'C' && answer_list[counter] != 'D')
        {
            cout << "Invalid input.  Enter only: A, B, C, or D.  Try again." << endl;
            cout << "Enter your answer for question " << (counter + 1) << endl;
            cin >> answer_list[counter];
        }

        //Correct answers (if both arrays match)
        if (answer_list[counter] == answer_key[counter])
        {
            right_answers++;
            answer_list[counter] = 'Y'; //Y is stored into right_answers
        }
        //Wrong answers (if both arrays do NOT match)
        else if(answer_list[counter] != answer_key[counter])
        {
            wrong_answers++;
            answer_list[counter] = 'N'; //N is stored into wrong_answers
        }

    }


    //Grader's Output(test results)
    for (int counter = 0; counter < 20; counter++)//Loop all the incorrect answers
	{
		if (answer_list[counter] == wrong)
			cout << "Answer " << (counter + 1) << " is incorrect." << endl;
	}
	cout << "Results (minimum 15 correct to pass):" << endl;
	cout << "You got " << right_answers << " correct." << endl;
	cout << "You missed " << wrong_answers << "." << endl;

	//Loop for pass or fail
	if (right_answers >= 15)
	{
	    cout << "You've passed!" << endl;
	}
	else
	{
	    cout << "You've failed." << endl;
	}


    return 0;
}
