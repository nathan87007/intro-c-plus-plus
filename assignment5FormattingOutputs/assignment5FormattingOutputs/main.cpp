#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	int num1 = 32;
	double num2 = 42.98765;

	//output the formated code to user
	cout << "The hex of " << num1 << " is " << hex << num1 << endl;
	cout << "The octal of " << num1 << " is " << oct << num1 << endl;
	cout << endl;
	cout << "|" << setw(10) << fixed << setprecision(3) << num2 << "|" << endl;
	cout << "|" << setw(10) << setprecision(4) << num2 << "|" << endl;
	cout << "|" << setw(10) << setprecision(5) << num2 << "|" << endl;
	cout << "|" << setw(10) << setprecision(6) << num2 << "|" << endl;
	cout << endl;
	cout << "|" << setw(5) << dec << num1 << "|" << setw(10) << setprecision(2) << num2 << "|" << endl;

	//allow user to close on a any key stroke
	_getch();
	return 0;
}