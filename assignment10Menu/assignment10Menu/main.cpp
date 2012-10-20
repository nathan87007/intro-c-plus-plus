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
	do{
	cout << "\nPlease enter your first number: ";
	cin >> firstNum;
	cout << "Please enter your second number: ";
	cin >> secondNum;

	//menu
	cout << "\nPlease Select one of the following numbers to choose what to do or press 'q' to quit: " << endl;
	cout << "\t1)  Add them together" << endl;
	cout << "\t2)  Subtract the second number from the first" << endl;
	cout << "\t3)  Multiply them together" << endl;
	cout << "\t4)  Divide the second number into the first number" << endl;
	cout << "\t5)  Find the average of the two numbers" << endl;
	cin >> select;

	switch(select){
		case '1':
			cout << "The sum of the numbers is: " << firstNum+secondNum << endl;
			break;
		case '2':
			cout << "The difference of the numbers is: " << firstNum-secondNum << endl;
			break;
		case '3':
			cout << "The product of the numbers is: " << firstNum*secondNum << endl;
			break;
		case '4':
			cout << "The difference of the numbers is: " << firstNum/secondNum << endl;
			break;
		case '5':
			cout << "The average of the numbers is: " << (firstNum+secondNum)/2 << endl;
			break;
		case 'q':
			cout << "GOODBYE!" << endl;
			break;
		default:
			cout << "Invalid entry try again" << endl;
			break;
	}
	}while(select != 'q');

	_getch();
	return 0;
}