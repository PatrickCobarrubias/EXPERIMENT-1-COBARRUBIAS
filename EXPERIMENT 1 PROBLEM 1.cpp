#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std; 

int main()
{
	
double BoxPrice;
double SidelinePrice;
double PremiumPrice;
double GeneralAdmissionPrice;
double Box;
double Sideline;
double Premium;
double GeneralAdmission;
double TotalBox;
double TotalSideline;
double TotalPremium;
double TotalGeneralAdmission;

cout << "Enter Box ticket price: ";
cin >> BoxPrice;
cout << "Enter Sideline ticket price: ";
cin >> SidelinePrice;
cout << "Enter Premium ticket price: ";
cin >> PremiumPrice;
cout << "Enter General Admission Price: ";
cin >> GeneralAdmissionPrice;
cout << "Number of Box ticket/s sold: ";
cin >> Box;
cout << "Number of Sideline ticket/s sold: ";
cin >> Sideline;
cout << "Number of Premium ticket/s sold: ";
cin >> Premium;
cout << "Number of General Admission ticket/s sold: ";
cin >> GeneralAdmission;

TotalBox = BoxPrice * Box;
TotalSideline = SidelinePrice * Sideline;
TotalPremium = PremiumPrice * Premium;
TotalGeneralAdmission = GeneralAdmission * GeneralAdmissionPrice;

cout << fixed << showpoint << setprecision(2);

cout << "Box Tickets Sold:" << Box << endl;
cout << "Total Box Ticket Sale:" << TotalBox << endl;
cout << "Sideline Tickets Sold:" << Sideline << endl;
cout << "Total Sideline Ticket Sale:" << TotalSideline << endl;
cout << "Premium Tickets Sold:" << Premium << endl;
cout << "Total Premium Ticket Sale:" << TotalPremium << endl;
cout << "General Admission Tickets Sold:" << GeneralAdmission << endl;
cout << "Total General Admission Ticket Sale:" << TotalGeneralAdmission << endl;

_getch();
return 0;
}



