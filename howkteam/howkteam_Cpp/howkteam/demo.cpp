//swap A - B
#include <iostream>
using namespace std;
#include <stdio.h>
void swap(int &a, int &b)
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	int tmp = a;
	cout << "tmp = " << tmp << endl;
	a = b;
	b = tmp;
}
int main()
{
	int a, b;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}