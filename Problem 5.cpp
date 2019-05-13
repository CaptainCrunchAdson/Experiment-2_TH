#include <iostream>
#include <conio.h>
#include <iomanip>

 using namespace std;

 int main()
 {
	 
	 int A = 0; 
	 int B = 1;
	 int C = 1;

	 cout << "The First 20 Fibonacci Numbers!\n" << endl;
	 cout << "Fibonacci Numbers:" << endl;

	 while (A + B < 10947)
	 {
		 C = A + B;
		 A = B;
		 B = C;
		 cout << C << ", ";
	 }

 _getch();
 return 0;
 }