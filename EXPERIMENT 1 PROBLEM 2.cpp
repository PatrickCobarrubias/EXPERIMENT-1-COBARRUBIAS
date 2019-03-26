#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	
double Mass;
double Density;
	
cout << "Input Mass:";
cin >> Mass;
cout << "Mass = " << Mass << "g" <<endl;
cout << "Input Density: ";
cin>> Density;
cout << "Density =" << Density << "g/cm^3" << endl;

cout << fixed << showpoint << setprecision(2);
cout << "Volume = " << (Mass/Density)/4 << "cm^3" << endl;
	
_getch();
return 0;
}
