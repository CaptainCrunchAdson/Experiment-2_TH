#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>
#include <cmath>


using namespace std;

int main ()
{

	int x;
	int y;
	double z= 2.5;
	double V;

	cout << "Enter the integers for X value and Y value.\n" << endl;
	cout << "x: "; cin >> x;
	cout << "y: "; cin >> y;

switch (x)
	{
		case 1:
		{
			x=1;
		if (y > 1 && y < 5)
		{ 
			V = x*y*z;
			cout << fixed << showpoint;
			cout << setprecision(2);
			cout << setw(10);
			cout << "The Value of V is: " << V << endl;
		}
		else if (y >= 5)
		{
			V = x+(y/z);
			cout << fixed << showpoint;
			cout << setprecision(2);
			cout << setw(10);
			cout << "The Value of V is: " << V << endl;

		}
	}
	break;

	case 2:
		{
		x = 2;
		if (y<=5)
		{
			V = abs((x-y)/z);
			cout << fixed << showpoint;
			cout << setprecision(2);
			cout << setw(10);
			cout << "The Value of V is: |" << V << "|" << endl;

		}

		else if (y>5)
		{
			V = x-sqrt(y+z);
			cout << fixed << showpoint;
			cout << setprecision(2);
			cout << setw(10);
			cout << "The Value of V is: " << V << endl;

		}

		}

		break;
	
		default:
		{
		V = x + y + z;
		cout << fixed << showpoint;
		cout << setprecision(2);
		cout << setw(10);
		cout << "The Value of V is:" << V << endl;
		}
		break;


}



_getch ();
return 0;
}
