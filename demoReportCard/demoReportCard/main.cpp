#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	float score1 = 0.95;
	float score2 = 1;
	float score3 = 0.05;
	float average = (score1 + score2 + score3) / 3;
	int columnWidth = 20;
	int column2Width = 10;

	cout << std::fixed << std::setprecision(0);
	cout << setfill('.');
		//Setfill allows you to trouble shoot your spacing and columns
	cout << "Assignment\t\t\tScore\n";
	cout << "-------------------------------------\n";
	
	cout << left << setw(columnWidth) << "Hello World" 
		<< right << setw(column2Width) << score1 * 100 << "%" << endl;
	
	cout << left << setw(columnWidth) << "Miles Calculator" 
		<< right << setw(column2Width) << score2 * 100 << "%" << endl;
	
	cout << left << setw(columnWidth) << "String Formatting" 
		<< right << setw(column2Width) << score3 * 100 << "%" << endl;
	
	cout << "-------------------------------------\n";
	
	cout << std::setprecision(5); 
	cout << left << setw(columnWidth) <<"Average" 
		<< right << setw(column2Width) << average << "%";

	getch();
	return 0;
}