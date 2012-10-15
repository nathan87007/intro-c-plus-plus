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
	//prompt user for input
	cout << "Please enter the tempature:";
	cin >> temp;
	cout << "Please enter and 'F' for fahrenheit or 'C' for celsius:";
	cin >> scale;
	//determine proper output
	if (scale == 'f' || scale == 'F')
	{
		output = (5.0/9.0)*(temp-32.0);
		cout << "The tempature in Celsius is: " << fixed << setprecision(2)<< output << " degrees!" << endl;
	}
	else if (scale == 'c' || scale == 'C')
	{
		output = (9.0/5.0)*temp+32.0;
		cout << "The tempature in Fahrenheit is: " << setprecision(2) << output << " degrees!" << endl;
	}
	else
	{
		cout << "Please enter either a 'C' or an 'F' to let the program know what you are converting from!" << endl;
	}
	_getch();
	return 0;
}