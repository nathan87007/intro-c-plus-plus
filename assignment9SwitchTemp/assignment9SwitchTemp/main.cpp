#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	char scale;
	float temp;
	float output;
	//prompt user for information
	cout << "Please enter the tempature: " << endl;
	cin >> temp;
	cout << "Please enter 'F' for Fahrenheit or 'C' for celsius: " << endl;
	cin >> scale;

	//enable switch to select choice
	switch (scale)
	{
		case 'c':
		case 'C':
			output = (9.0/5.0)*temp+32;
			cout << "The tempature in Fahrenheit is: " << fixed << setprecision(2) << output << " degrees!" << endl;
			break;

		case 'f':
		case 'F':
			output = (5.0/9.0)*(temp-32);
			cout << "The tempature in Celsius is: " << setprecision(2) << output << " degrees!" << endl;
			break;

		default:
			cout << "Please enter either a 'F' or a 'C' for the tempature scale!" << endl;
	}
	//inform user how to exit
	cout <<"Press any key to exit!";
	_getch();
	return 0;
}