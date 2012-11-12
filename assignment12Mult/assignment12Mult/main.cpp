#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
//declare the function
double mult(double,double);

int main(){
	double num1;
	double num2;
	double sum;

	cout << "Please enter the first number: ";
	cin >> num1;
	cout << "Please enter the second number: ";
	cin >> num2;
	//call the function
	sum = mult(num1,num2);
	cout << "The sum of the two numbers is: " << fixed << setprecision (3) << sum << endl;

	_getch();
	return 0;
}
//create the function to multiply the two numbers
double mult(double one,double two){
	float total = one*two;
	return total;

}
