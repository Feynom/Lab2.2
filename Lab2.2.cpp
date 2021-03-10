#include <iostream>
#include "Point.h"

int main()
{
    Point A, B, C;

    cout << "\nDot A" << endl;
    cin >> A;
    cout << A;

    cout << "\nDot B" << endl;
    cin >> B;
    cout << B;

    cout << "\nDot C" << endl;
    cin >> C;
    cout << C;

    cout << "\nA + B = " << endl <<  A + B << endl;
    cout << "\nA - B = " << endl << A - B << endl;

    cout << "Dot comparison" << endl;

    cout << "\nDots A and B" << endl;
    if (A == B)
        cout << "Dots are equal" << endl;
    else
        cout << "Dots are not equal" << endl;

    cout << "\nDots B and C" << endl;
    if(B != C)
        cout << "Dots are not equal" << endl;
    else
        cout << "Dots are equal" << endl;

    return 0;
}