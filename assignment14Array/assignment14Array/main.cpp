#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int first [2][3] = {{16,18,23},{54,91,11}};
	int second [2][3] = {{14,52,77},{16,19,59}};
	
	//display the first array
	cout << "The first array:";
	for(int x=0; x<2; x++){
		cout << endl;
		for(int y=0; y<3; y++){
			cout << first [x][y] << " ";
		}
	}
	cout << endl;

	//display the second array
	cout << "The second array:";
	for(int x=0; x<2; x++){
		cout << endl;
		for(int y=0; y<3; y++){
			cout << second [x][y] << " ";
		}
	}
	cout << endl;

	//display sum of two arrays
	cout << "The two arrays added together:";
	for(int x=0; x<2; x++){
		cout << endl;
		for(int y=0; y<3; y++){
			cout << second [x][y]+first [x][y] << " ";
		}
	}
	cout << endl;
	_getch();
	return 0;
}