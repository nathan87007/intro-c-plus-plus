#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;

//create structure
struct pay{
	int id;
	string name;
	double rate;
	int hours;
};

int main(){
	//create variables and array
	double total=0;
	pay employee[5];

	//loop for input
	for(int i=0; i<5; i++){
		cout << "Enter ID Number: ";
		cin >> employee[i].id;
		cout << "Enter Name: ";
		cin >> employee[i].name;
		cout << "Enter pay rate: ";
		cin >> employee[i].rate;
		cout << "Enter hours: ";
		cin >> employee[i].hours;
	}
	//output
	cout << setw(7) << "NUMBER"
		 << setw(10) << "NAME"
		 << setw(12) << "PAY" << endl;
	for(int ii=0; ii<5; ii++){
		cout << setw(7) << employee[ii].id
			<< setw(10) << employee[ii].name
			<< setw(12) << setprecision(2) << employee[ii].rate*employee[ii].hours << endl;
		total+= employee[ii].rate*employee[ii].hours;
	}
	//output total gross pay
	cout << setw(17) << "TOTAL GROSS PAY = "
		 << setw(12) << setprecision(2) << total << endl;


	_getch();
	return 0;
}