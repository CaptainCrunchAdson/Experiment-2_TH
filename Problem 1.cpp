#include <conio.h>
#include <iostream>
#include <iomanip>

using namespace std;

int main ()
{
	char PACKAGE;
	int HOURS;

	cout << "This Internet Service Provider has 3 different subscription packages." << endl; 
	cout << "Choose the LETTER of your decided Package.\n" << endl;
	cout << "PACKAGE A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr." << endl;
	cout << "PACKAGE B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr." << endl;
	cout << "PACKAGE C: For P1995/mo of unlimited access is provided.\n" << endl;
	cout << "Enter Package LETTER: "; cin >> PACKAGE;
	cout << "Hours of Usage: "; cin >> HOURS;

switch (PACKAGE)
{

	case 'a':
	case 'A':
		if (HOURS <= 10)
		 cout << "Your Monthly Internet bill is: " << 995 << ".00php";
		else
		cout << "Your Monthly Internet bill is: " << (995 + ((HOURS-10)*20)) << ".00php";
	break;

	case 'b':
	case 'B':
		if (HOURS <= 20)
		cout << "Your Monthly Internet bill is: " << 1495 << ".00php";
	else
		cout << "Your Monthly Internet bill is: " << (1495 + ((HOURS-20)*10)) << ".00php";
	break;

	case 'c':
	case 'C':
		cout << "Your Monthly Internet bill is: " << 1995 << ".00php";
	break;

	default:
		cout << "Invalid input. Please Try Again";

}

getch();
return 0;
}