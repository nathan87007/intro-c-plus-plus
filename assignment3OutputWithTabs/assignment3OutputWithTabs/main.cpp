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
	int columnWidth = 20;
	int columnWidth2 = 10;


	cout << left << setw(columnWidth) << "PART NO." << setw(columnWidth2) << "PRICE" << endl;
	cout << "-------------------------------" << endl;
	
	cout << left << setw(columnWidth) << "T1267" <<right << part1 << endl;
	cout << left << setw(columnWidth) << "T1300" << endl;
	cout << left << setw(columnWidth) << "T2401" << endl;
	cout << left << setw(columnWidth) << "T4482" << endl;
	
	
	getch();
	return 0;
}