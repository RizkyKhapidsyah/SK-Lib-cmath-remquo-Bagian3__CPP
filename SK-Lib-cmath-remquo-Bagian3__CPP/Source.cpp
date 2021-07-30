#include <cmath>
#include <iostream>
#include <conio.h>

/*
    Source by GeeksForGeeks
    Modified For Learn by RK
    I.D.E : VS2019
*/

using namespace std;

int main() {
    int q;
    double a = 17.4;
    int b = 2;

    double hasil = remquo(a, b, &q);

    cout << "Remainder of " << a << "/" << b << " is " << hasil << endl;
    cout << "Quotient of " << a << "/" << b << " is " << q << endl << endl;

    _getch();
    return 0;
}