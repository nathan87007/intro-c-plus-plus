#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string firstName = "Rick";
	string lastName = "Jones";

	cout << "length of firstName: " << firstName.length() << endl;
	cout << "size of firstName: " << firstName.size() << endl;
	cout << "sizeOf firstName: " << sizeof(firstName) << endl;

	string emptyTest;
	//cout << "Am I empty? " << emptyTest.empty() << endl;
	if(emptyTest.empty())
	{
		cout << "I AM EMPTY!" << endl;
	}else{
		cout << "NOT EMPTY!" << endl;
	}
	_getch();
	return 0;
}