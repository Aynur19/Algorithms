#include <iostream>
#include "gcd.h"
#include "helper.h"


using namespace std;


int main()
{
    vector<vector<int>> numbers = readFileNumbers("data.txt", ',');
    for(int i = 0; i < numbers.size(); i++)
    {
        cout << vectorToString(numbers[i], "(", ")") << endl;

    }
    //gcd();
}

