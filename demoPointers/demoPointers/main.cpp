#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	int grade1;


	//address of grade 1
	cout << "grade1 value:" << grade1 << endl;
	//value of grade 1
	cout << "grade1 address:" << &grade1 << endl;
	//value of pointer grade 1
	cout << "pointerGrade1 value:" << pointerGrade1 << endl;
	//value what pointer grade 1 is pointing to
	cout << "what pointerGrade1 is pointing to value:" << *pointerGrade1 << endl;

	int *pointer2 = &grade1;
	int *pointer3 = &grade1;
	*pointer2 = 45;
	*pointer3 = 77;
	cout << "pointer2:" << *pointer2 << endl;

	_getch();
	return 0:
}