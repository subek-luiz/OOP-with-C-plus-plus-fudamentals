// englstrc.cpp
// demonstrates structure using English measurement
#include <iostream>
using namespace std;

// define structure
struct Distance
    {
        int feet;
        float inches;
    };

int main()
    {
        Distance d1,d3;
        Distance d2 = {11,8.23};

        cout << "Enter feet: " ; cin >> d1.feet;
        cout << "Enter inches: "; cin >> d1.inches;

        d3.inches = d1.inches + d2.inches;
        d3.feet = 0;
        if (d3.inches > 12)
        {
            d3.inches -= 12;
            d3.feet++;
        }

        d3.feet = d1.feet + d2.feet;

        cout << d1.feet << "' "<< d1.inches << "''" << endl; 
        cout << d2.feet << "' "<< d2.inches << "''" << endl;
        cout << d3.feet << "' "<< d3.inches << "''" << endl;
    }