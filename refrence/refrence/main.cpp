#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;


//function prototype
int sumValue(int num1, int num2);
int sumReference(int &num1, int &num2);

//functions
int sumValue(int num1, int num2)
{
	num1 = num1 + num2;
	return num1;
}
int sumReference(int &num1, int &num2)
{
	num1 = num1 + num2;
	return num1;
}

//getting inputs and displaying to user
int main()
{
	int input1 = 100;
	int input2 = 200;
	int total = sumValue(input1, input2);
	cout << "input1:" << input1 << "input2:" << input2 << "total:" << total << endl;
	total = sumValue(input1, input2);
	cout << "input1:" << input1 << "input2:" << input2 << "total:" << total << endl;


	_getch();
	return 0;
}
