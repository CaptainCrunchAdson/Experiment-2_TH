#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ()
{
	int counter;

	cout << "Let's count to 30! Go!\n";
	cout << " " << endl;
	cout << "Counting... \n" << endl;

	for(counter=1; counter <=10; counter++)
	{
		cout << counter << ", ";
	}
	for(counter > 10; counter <=30; counter++)
	{
		if (counter % 2 == 0)
		cout << counter << ", ";
	}
cout << endl;

_getch();
return 0;
}
