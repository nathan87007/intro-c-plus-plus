#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//get the total hours worked
	float hours;
	cout << "Please enter the amount of hours worked: ";
	cin >> hours;
	//display the total salary made
	float hours2 = hours - 40;
	float pay = hours2 * 12.00;
	float pay2 = 40 * 8.00;

	if(hours >= 0 && hours <= 40)
		cout << "You will make: $" << fixed << setprecision(2) << hours * 8.00 << endl;
	else if(hours > 40)
		cout << "You will make: $" << fixed << setprecision(2) << pay + pay2 << endl;
	else 
		cout << "Please enter a valid amount of hours worked!" << endl;

	_getch();
	return 0;
}