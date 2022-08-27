#include <iostream>
#include "gcd.h"

int getGCD()
{
    int n;
    cout << "Count of numbers: ";
    cin >> n;

    int * a = new int[n];
    cout << "Enter the numbers: " << endl;

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    function<int(int, int)> gcd;
    string msg;

    setGcdOptions(gcd, msg);

    msg.append(to_string(a[0]));
    for(int i = 1; i < n; i++)
    {
        msg.append(", ");
        msg.append(to_string(a[i]));
    }
    msg.append(": ");

    int result = 0;

    for(int i = 0; i < n - 1; i++)
    {
        result = gcd(a[i], a[i + 1]);
        a[i + 1] = result;
    }

    cout << msg << result << endl;

    delete[] a;

    return 0;
}



int getGCDviaDivision(int a, int b)
{
    while(a != 0 && b != 0)
    {
        if(a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }

    return a + b;
}

int getGCDviaSubstraction(int a, int b)
{
    while(a != b)
    {
        if(a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }

    return a;
}

void setGcdOptions(function<int(int, int)> & gcd, string & msg)
{
    cout << "Finding the GCD via (enter of a number) ?.." << endl;
    cout << "1) Division" << endl;
    cout << "2) Substraction" << endl;

    int option = 0;
    cin >> option;

    if(option == 0 || option == 1)
    {
        gcd = getGCDviaDivision;
        msg = "The GCD (via division) of the entered numbers ";
    }
    else
    {
        gcd = getGCDviaSubstraction;
        msg = "The GCD (via substraction) of the entered numbers ";
    }
}