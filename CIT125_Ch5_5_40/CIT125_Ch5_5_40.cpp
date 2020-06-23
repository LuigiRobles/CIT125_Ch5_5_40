// CIT125_Ch5_5_40.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Luigi Robles
// Ch.5 Pg.156 Figure 5-40
// 6-22-2020 Summer Term

#include <iostream> // preprocessing directive
using namespace std;
#include <iomanip> // directive to use setprecisoin manipulator

int main()
{
	//declare named constants and variables + defaulting
	const double RATE1 = 0.045; 
	const double RATE2 = 0.035;
	char code = ' ';
	double currentPay = 0.0;
	double raise = 0.0;
	double newPay = 0.0;

	//enter input items
	//input part of IPO
	cout << "Pay code: ";
	cin >> code;
	cout << "Current pay: ";
	cin >> currentPay;

	//calcualte raise and new pay
	//selection structure
	if (code == '1' || code == '4' || code == '9')
		raise == currentPay * RATE1;
	else
		raise = currentPay * RATE2;
	//end if 
	
	//processing part of IPO
	newPay = currentPay + raise;
	
	//display new pay
	//output part of IPO
	cout << fixed << setprecision(2);
	cout << "New pay: $" << newPay << endl;
	return 0;
} //end of main function
