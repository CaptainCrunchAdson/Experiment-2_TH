#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    
	int Num1;
	int Num2;
	int SUM;
	bool userquit = false;

	do
	{ 

	SUM = 0;
	cout <<"Enter any number: ";
	cin >> Num1;

	{
		if (Num1 < 1)
		{
			cout << "Thank you!";
			userquit = true;
		}

		else
		{
			for (Num2 =1; Num2 <= Num1; Num2++)
			{
				SUM += Num2;
			}
				cout <<"The sum of all numbers from 1 to "<< Num1 <<" is "<< SUM <<endl;
		}
	}
} 


while (!userquit);

_getch();
return 0;
}