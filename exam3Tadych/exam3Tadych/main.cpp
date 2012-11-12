#include <iostream>
#include <conio.h>
#include <iomanip>
#include <new>

using namespace std;

int main(){
	int number;
	int i;
	float total = 0;
	
		cout << "Enter the amount of numbers to be entered in the array: ";
		cin >> number;

		int *arrNum = new int[number];

		for(i=0; i<number; i++){
			cout << "Enter a number: ";
			cin >> arrNum[i];
			total += arrNum[i];
		}

		cout << "The numbers stored in the array are: " << endl;

		for(i=0; i<number; i++){
			cout << arrNum[i] << endl;
		}
		cout << "The total of the numbers is: " << total << endl; 

		cout << "The numbers stored in the array in reverse order are: " << endl;

		for(i=number-1; i>=0; i--){
			cout << arrNum[i] << endl;
		}

	_getch();
	return 0;
}