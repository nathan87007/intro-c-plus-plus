#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	float firstnum = 106.54;
	float secnum = 89.532;
	float thirdnum = 98.76;
	float total = firstnum + secnum + thirdnum;
	float average = total / 3;
	//Set up variables for columnWidths
	int columnWidth = 20;
	int columnWidth2 = 10;
	
	//output the values
	cout << left << setw(columnWidth) << "First Number" << setw(columnWidth2) << right << firstnum << endl;
	cout << left << setw(columnWidth) << "Second Number" << setw(columnWidth2) << right << secnum << endl;
	cout << left << setw(columnWidth) << "Third Number" << setw(columnWidth2) << right << thirdnum << endl;
	cout << "-------------------------------" <<endl;
	cout << fixed << setprecision(4); //set the decimal places
	cout << left << setw(columnWidth) << "Total" << setw(columnWidth2) << right << total << endl;
	cout << setprecision(1);
	cout << left << setw(columnWidth) << "Average" << setw(columnWidth2) << right << average << endl;
	
	
	_getch();
	return 0;
}