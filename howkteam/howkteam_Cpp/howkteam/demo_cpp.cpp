#include <iostream>
//#include <bits/stdc++.h>
using namespace std;
class SinhVien {
private: //Encapsulation property
    string id, name, birthday;
    double gpa = 7.5;
public:
    void xinchao();
    void dihoc();
};
//Implementation //hehavior
void SinhVien::xinchao() {
    cout << "go to school!\n";
}
int main() {
    SinhVien x;
    x.dihoc();
    x.xinchao();
    //cout << x.id << endl;
    return 0;
}