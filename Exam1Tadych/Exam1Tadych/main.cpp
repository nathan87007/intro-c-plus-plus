#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	float miles = 47.3;
	float gallons = 3;
	float mpg = miles / gallons;
	int colw = 20;
	int colw2 = 10;
	
	//output
	cout << "Enter the miles driven:\t\t" << miles <<endl;
	cout << "Enter the gallons used:\t\t" << gallons << endl;
	cout <<  fixed << setprecision(1) << "Miles per gallon:\t\t" << mpg << endl;

	//end require a keystroke
	_getch();
	return 0;
}