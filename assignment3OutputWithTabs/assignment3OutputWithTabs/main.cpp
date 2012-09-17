#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	//declare variables
	float part1 = 6.34;
	float part2 = 8.92;
	float part3 = 65.40;
	float part4 = 103.45;
	//Set up variables for columnWidths
	int columnWidth = 5;
	int columnWidth2 = 10;

	
	cout << left << setw(columnWidth) << "PART NO." << right<< setw(columnWidth2) << "\tPRICE" << endl;
	cout << "-------------------------------" << endl;
	
	cout << left << setw(columnWidth) << "T1267" << setw(columnWidth2) <<right << "\t$" << part1 << endl;
	cout << left << setw(columnWidth) << "T1300" << setw(columnWidth2) <<right << "\t$" << part2 << endl;
	cout << left << setw(columnWidth) << "T2401" << setw(columnWidth2) <<right << "\t$" << part3 << endl;
	cout << left << setw(columnWidth) << "T4482" << setw(columnWidth2) <<right << "$" << part4 << endl;
	
	
	getch();
	return 0;
}