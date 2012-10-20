#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	int firstNum;
	int secondNum;
	char select;
	
	//Instructions
	cout << "This program will allow you to preform some simple math equations" << endl;
	cout << "-----------------------------------------------------------------" << endl;
	
	//get input
	cout << "\nPlease enter your first number: ";
	cin >> firstNum;
	cout << "Please enter your second number: ";
	cin >> secondNum;

	//menu
	cout << "\nPlease Select one of the following numbers to choose what to do: " << endl;
	cout << "\t1)  Add them together" << endl;
	cout << "\t2)  Subtract the second number from the first" << endl;
	cout << "\t3)  Multiply them together" << endl;
	cout << "\t4)  Divide the second number into the first number" << endl;
	cout << "\t5)  Find the average of the two numbers" << endl;
	cin >> select;
	_getch();
	return 0;
}