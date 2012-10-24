#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string>
using namespace std;

struct SuperHero
{
	string name;
	string power;
	int age;
};

void superHeroArrays()
{
	string superNames[10] = {"superman", "batman", "aquaman"};
	string superPower[10] = {"strength", "money", "speak to fish"};
	int superAge[10] = {35, 35, 50};

	SuperHero superman;
	superman.age = 35;
	superman.name = "Superman";
	superman.power = "Strength";

	SuperHero mySuperHeroes[10];
	mySuperHeroes[0] = superman;

	

	int nameLength = 10;
	for(int i=0; i<nameLength; i++)
	{
		cout << "Hero Name:" << superNames[i];
		cout << "Hero Power:" << superPower[i];
		cout << "Hero Age:" << superAge[i];
		cout << endl;
	}
}
int main()
{
	SuperHero myHeros[10];
	int heroLength = 10;
	bool isQuit = false;
	int heroIndex = 0;
	while(!isQuit)
	{
		SuperHero tempHero;
		cout << "Name? ";
		getline(cin, tempHero.name);
		cout << endl << "Power? ";
		getline(cin, tempHero.power);
		cout << endl << "Age? ";
		cin >> tempHero.age;
		myHeros[heroIndex] = tempHero;
		heroIndex++;
		if(tempHero.name == "q" || tempHero.power == "q")
		{
			isQuit = true;
		}else{
			for(int i=0; i<heroIndex; i++)
			{
				cout << "Name: " << myHeros[i].name;
				cout << "Power: " << myHeros[i].power;
				cout << "Age: " << myHeros[i].age;
				cout << endl;
			}
		}
	}
	_getch();
	return 0;
}
