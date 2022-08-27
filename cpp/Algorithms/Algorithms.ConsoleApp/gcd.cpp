#include <iostream>
#include "gcd.h"


int getGCD()
{
    cout << "Count of numbers: ";
    int n = getInputNumber(2, 100);

    int * a = new int[n];
    cout << "Enter the numbers: " << endl;

    for(int i = 0; i < n; i++)
    {
        a[i] = getInputNumber(1, INT32_MAX);
    }

    function<int(int, int)> gcd;
    string msg;

    if(setGcdOptions(gcd, msg, 0))
    {
        gcdCalculation(gcd, a, n, msg);
    }
    else
    {
        for(int i = 1; i <= gcdOptions; i++)
        {
            setGcdOptions(gcd, msg, i);
            gcdCalculation(gcd, a, n, msg);
        }
    }

    delete[] a;

    return 0;
}

string numbersToString(const char * start, int * numbers, int nSize, const char * end)
{
    string result = start;
    result.append(to_string(numbers[0]));
    for(int i = 1; i < nSize; i++)
    {
        result.append(", ");
        result.append(to_string(numbers[i]));
    }
    result.append(end);

    return result;
}

void gcdCalculation(function<int(int, int)> gcd, int * numbers, int nSize, string msg)
{
    int result;

    msg.append(numbersToString("(", numbers, nSize, "): "));
    result = numbers[0];
    for(int i = 0; i < nSize - 1; i++)
    {
        result = gcd(result, numbers[i + 1]);
    }
    cout << msg << result << endl;
}

int getInputNumber(int min, int max)
{
    string errorMsg = "Please enter an integer from " 
                      + to_string(min) + " to " 
                      + to_string(max) + "!\n";
    string input;
    int result = 0;

    while(result < min)
    {
        cin >> input;
        try
        {
            result = stoi(input);

            if(result <= 0)
            {
                cout << "Please enter an integer from " << errorMsg;
            }
        }
        catch(invalid_argument const & e)
        {
            cout << "The input couldn't be parsed as a number. " << errorMsg;
        }
        catch(out_of_range const & e)
        {
            cout << "The input was not in the range of numbers supported by this type." 
                 << errorMsg;
        }
    }

    return stoi(input);
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

bool setGcdOptions(function<int(int, int)> & gcd, string & msg, int option)
{
    msg.clear();

    if(option <= 0)
    {
        cout << "Finding the GCD via (enter of a number) ?.." << endl;
        cout << "1) Division" << endl;
        cout << "2) Substraction" << endl;
        cout << "3) Both methods" << endl;
    }

    while(option <= 0)
    {
        option = getInputNumber(1, 3);
    }

    if(option == 1)
    {
        gcd = getGCDviaDivision;
        msg = "The GCD (via division) of the entered numbers ";
    }
    else if (option == 2)
    {
        gcd = getGCDviaSubstraction;
        msg = "The GCD (via substraction) of the entered numbers ";
    }
    else if(option >= gcdOptions + 1)
    {
        return false;
    }

    return true;
}