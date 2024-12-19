/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
//generates random number from 1-6
	int seed = time(0);
	srand(seed);
	int diceAnswer = (rand()%(6-1 + 1))+1;
//asks user to enter a number
	cout << "Enter a number 1-6 to guess the dice roll"<<endl;
	int userAnswer;
	cin>>userAnswer;
//displays answer depending if the answer is correct or not
	if(diceAnswer == userAnswer) {
		cout<<"congratulations! your answer of "<<userAnswer<<" is correct!"<<endl;
	}
	else {
		cout <<"Sorry, your guess of "<<userAnswer<<" was incorrect, you rolled a "<<diceAnswer<<
		" try again next time."<<endl;
	}
	return 0;
}