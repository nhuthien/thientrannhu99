#include <iostream>
using namespace std;

struct FRACTION {
	int ts;
	int ms;
};
void imp(FRACTION &u); //done
void exp(FRACTION &u); //done
int theMaxDivisor(int a, int b); //done
void reduce(FRACTION &u); //pending

//FRACTION operator+(FRACTION u, FRACTION v);
//FRACTION operator-(FRACTION u, FRACTION v);
FRACTION operator*(FRACTION u, FRACTION v);
//FRACTION operator/(FRACTION u, FRACTION v);

void imp(FRACTION &u) {
	cout << "Enter ts (not zero!): "; cin >> u.ts;
	cout << "Enter ms: "; cin >> u.ms;
	if (u.ms == 0) cout << "No Valid!" << endl;
}

void exp(FRACTION &u) {
	cout << u.ts;
	cout << "/" << u.ms << endl;
}

int theMaxDivisor(int a, int b) {
	if (a == b) return a;
	else if (a > b) return (a % b);
	return (b % a);
}
void reduce(FRACTION &u) {
	int tmp = theMaxDivisor(u.ts, u.ms);
	u.ts /= tmp;
	u.ms /= tmp;
}
FRACTION operator*(FRACTION u, FRACTION v) {
	FRACTION res;
	res.ts = u.ts * v.ts;
	res.ms = u.ms * v.ms;
	reduce(res);
	return res;
}

int main() {
	FRACTION a, b; //<=> u, v
	imp(a);
	imp(b);
	exp(a);
	exp(b);
	FRACTION c = a*b;
	exp(c);
}




