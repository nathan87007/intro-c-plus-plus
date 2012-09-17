#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	int firstnum = 106.54;
	int secnum = 89.532;
	int thirdnum = 98.76;
	int average;
	int total;
	//Set up variables for columnWidths
	int columnWidth = 20;
	int columnWidth2 = 10;
	cout << std::fixed;
	//find total of numbers
	total = firstnum + secnum + thirdnum;
	average = total / 3;
	
	cout << std::setprecision(4);
	cout << left << setw(columnWidth) << "First Number" << setw(columnWidth2) << firstnum << endl;
	cout << left << setw(columnWidth) << "Second Number" << setw(columnWidth2) << secnum << endl;
	cout << left << setw(columnWidth) << "Third Number" << setw(columnWidth2) << thirdnum << endl;
	cout << left << setw(columnWidth) << "Total" << setw(columnWidth2) << total << endl;
	cout << std::setprecision(1);
	cout << left << setw(columnWidth) << "Average" << setw(columnWidth2) << average << endl;
	
	
	getch();
	return 0;
}