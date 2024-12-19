/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
	//asks user for 2 numbers
	double num1;
	double num2;
	cout <<"Enter two numbers: ";
	cin>>num1;
	cin>>num2;
	//determins which number is bigger and displays it
	if(num1 > num2) {
		cout <<num2<<" is the smaller number, "<<num1<<" is the bigger number"<<endl;
	}
	else {
		cout << num1<<" is the smaller number, "<<num2 << " is the bigger number"<<endl;
	}
	return 0;
}