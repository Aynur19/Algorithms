#include <iostream>
#include "gcd.h"

using namespace std;


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

    int result = 0;

    for(int i = 0; i < n - 1; i++)
    {
        result = getGCDviaDivision(a[i], a[i + 1]);
        a[i + 1] = result;
    }

    delete[] a;

    cout << "The GCD of the entered numbers: " << result << endl;

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