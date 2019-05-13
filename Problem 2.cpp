    
#include <iostream>
#include <conio.h>
#include <iomanip> 

using namespace std;

int main ()
{

	int WATER;
	int BAL;

	cout << "This program computes youre water bill." << endl;
	cout << "Enter the indicated information needed to asses your monthly bill." << endl;
	cout << "Enter the value in DIGITS.\n" << endl;
	cout << fixed << showpoint;
	cout << setprecision(2);
	cout << "Enter Number of Gallon Consumption: "; cin >> WATER;
	cout << "Unpaid Balance: "; cin >> BAL;
    cout << " " << endl;

	if (BAL > 0)
	     cout << "Your monthly water bill is " << 35 + (1.10 * WATER) + 20 << "php.";

	else
		 cout << "Your monthly water bill is " << 35 + (1.10 * WATER) << "php.";

_getch ();
return 0;
}
