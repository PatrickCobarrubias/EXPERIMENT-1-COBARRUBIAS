#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{

double AverageDailyBalance;
double NetBalance;
double Payment;
double d1;
double d2;
double Interest;

const double Interest_Constant = 0.0152;

cout << fixed << showpoint  << setprecision(2);
cout << "Type in Balance shown in the bill: ";
cin >> NetBalance;
cout << "Type in Payment made: ";
cin >> Payment;
cout << "Type in the number of days in the billing cycle: ";
cin >> d1;
cout << "Type in the number of days payment is made before the billing cycle: ";
cin >> d2;

AverageDailyBalance = (NetBalance * d1 - Payment * d2)/d1;
Interest = (AverageDailyBalance * Interest_Constant);


cout << "Computed Interest:" << Interest << endl;

_getch();
return 0;

}
