#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
//declaring functions
int getSum(int num1, int num2);
int getSum(int num1, int num2, int num3);


int getSum(int num1, int num2)
{
	return getSum(num1, num2, 0);
}

int getSum(int num1, int num2, int num3)
{
	return num1 + num2 + num3;
}

int main()
{
	//Declare Variables
	int inputNum1 = 0;
	int inputNum2 = 0;
	int inputNum3 = 0;

	//Ask for the Input of User
	cout << "Please enter in the first number to add:";
	cin >> inputNum1;
	cout << endl << "Please enter the second number to add:";
	cin >> inputNum2;
	cout << endl << "Please enter the third number to add:";
	cin >> inputNum3;

	//Calculate and return a sum
	int total = getSum(inputNum1, inputNum2, inputNum3);
	cout << endl << "The sum is: " << total;

	_getch();
	return 0;
}