#include <iostream>

using namespace std;
int main()
{
    //Задание 1
    int i = 1, j = 5, a = 7, b = 11;
    int plus = i + b;
    cout << plus << ": i+b" << endl;
    int minus = j - a;
    cout << minus << ": j-a" << endl;
    int umn = i * j;
    cout << umn << ": i*j" << endl;
    int del = a/j;
    cout << del << ": a/j" << endl;
    int ost = b%j;
    cout << ost << ": b%j" << endl;
    int ink = ++b;
    cout << ink << ": ++b" << endl;
    int dek = --a;
    cout << dek << ": --a" << endl;
    //Задание 2
    cout << boolalpha;
    int a1 = 0, a2 = 1, a3 = 1, a4 = 0;
    cout << "false = " << (a1==a2) << endl;
    cout << "true = " << (a2!=a4) << endl;
    cout << "true = " << (a3 > a1) << endl;
    cout << "false = " << (a2 < a4) << endl;
    cout << "true = " << (a2>=a2) << endl;
    cout << "true = " << (a1<=a2) << endl;
    return 0;
}
