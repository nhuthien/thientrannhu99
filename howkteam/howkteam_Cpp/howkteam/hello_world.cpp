// howkteam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << setw(5) << left << "ID"; //the width = 5, 'ID' is on the left
	cout << setw(30) << left << "Name";
	cout << setw(20) << right << "Address" << endl;

	cout << setfill('-');
	cout << setw(55) << "-" << endl;
	int n;
	cin >> hex >> n;
	cout << dec << n;
}
//std: toan tu phan giai pham vi