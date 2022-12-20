// HW2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "HW2.h"
int x;
int y;

int main()
{
	int sel = 0;
	
	cout << "Select type of Employee:\n1- Professional\n2- Nonprofessional\n\n";
	cin >> sel;
	if(sel == 1){
		Professional p(y);
		cout << "Professional salary is " << p.getsalary() <<" dollars per year.\n";
		cout << "Professional vacation is  " << p.getvacation() << " days per year.\n";
		cout << "Professional insurance contribution is " << p.getinsurance() << " dollars per month.\n";
	}
	else if (sel == 2) {
		cout << "Enter number of hours worked(full year = 2080)\n\n";
		cin >> x;
		Nonprofessional n(x);
		cout << "Nonprofessional salary is " << n.getsalary() << " dollars.\n";
		cout << "Nonprofessional vacation is " << n.getvacation() << " hours.\n";
		cout << "Nonprofessional insurance contribution is " << n.getinsurance() << " dollars per month\n";
	}
	
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
