#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
	int value = 10;
	int value2 = 2;

	for(int col=0; col<10; col++)
	{
		for(int row=0; row<=col; row++)
		{
			cout << '*';
		}
		for(int row =0; row<value; row++)
		{
			cout << ' ';
		}
		for(int row=10; row>col; row--)
		{
			cout << '*';
		}
		for(int row =0; row<value2; row++)
		{
			cout << ' ';
		}
		for(int row=0; row<col; row++)
		{
			cout << ' ';
		}
		for(int row=10; row>col; row--)
		{
			cout << '*';
		}
		
		for(int row=10; row>col; row--)
		{
			cout << ' ';
		}
		for(int row=0; row<=col; row++)
		{
			cout << '*';
		}
		value--;
		value2++;
		cout << endl;
	}

	_getch();
	return 0;
}