#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

void outputGrades(float arrGrades[], int length);

int main()
{
	float grades[] = {99, 88.7, 36, 54, 0, 77, 99, 101, 34};
	float grades2[100];
	float gradesLength = 6;

	int length = sizeof(grades) / sizeof(grades[0]);
	cout << "sizeof array:" <<sizeof(grades) << endl;
	cout << "sizeof array[0]:" << sizeof(grades[0]) << endl;
	cout << "length:" << length << endl;

	outputGrades(grades, length);

	_getch();
	return 0;
}

void outputGrades (float grades[], int length)
{
	float sum = 0;
	for (int i = 0; i < length; i++)
	{
		cout << "Grade #" << i << ":" << grades[i] << endl;
		sum += grades[i];
	}
	cout << "Total Grades: " << sum << endl;
}

