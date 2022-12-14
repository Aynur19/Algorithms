#include <iostream>
#include <fstream>
#include <sstream>
//#include "gcdInteractive.h"

using namespace std;

//struct GcdModel
//{
//	int result = 1;
//	int * data = { };
//
//public:
//	GcdModel(int result, int * data)
//	{
//		this->result = result;
//		this->data = data;
//	}
//
//	~GcdModel()
//	{
//		delete data;
//	}
//};


void radNumbersFromFile()
{
	ifstream fileData;
}


//vector<int> readStringNumbers(string strNumbers)
//{
//	istringstream streamNumbers(strNumbers);
//	string strNumber;
//	vector<int> result;
//	int number;
//
//	while(streamNumbers.good())
//	{
//		getline(streamNumbers, strNumber, ',');
//
//		if(strNumber.empty())
//		{
//			continue;
//		}
//
//
//		number = stringToInt(strNumber, 0);
//
//		result.push_back(number);
//	}
//
//	return result;
//}
//


//vector<vector<int>> readFileNumbers(const char * filePath, const char separator)
//{
//	ifstream fileData;
//	string strData;
//
//	vector<vector<int>> numbersData = { };
//
//	fileData.open(filePath);
//
//	if(fileData.is_open())
//	{
//		while(fileData.good())
//		{
//			getline(fileData, strData, '\n');
//
//			numbersData.push_back(readStringNumbers(strData));
//		}
//	}
//
//	fileData.close();
//
//	return numbersData;
//}

//int gcd()
//{
//    cout << "Count of numbers: ";
//    int n = getInputNumber(2, 100);
//
//    int * a = new int[n];
//    cout << "Enter the numbers: " << endl;
//
//    for(int i = 0; i < n; i++)
//    {
//        a[i] = getInputNumber(1, INT32_MAX);
//    }
//
//    function<int(int, int)> gcdCacl;
//    string msg;
//
//    if(setGcdOptions(gcdCacl, msg, 0))
//    {
//        gcdCalculation(gcdCacl, a, n, msg);
//    }
//    else
//    {
//        for(int i = 1; i <= gcdOptions; i++)
//        {
//            setGcdOptions(gcdCacl, msg, i);
//            gcdCalculation(gcdCacl, a, n, msg);
//        }
//    }
//
//    delete[] a;
//
//    return 0;
//}
//
//vector<int, vector<int>> gcdCalculation(function<int(int, int)> gcdFunc, vector<int> numbers, string msg)
//{
//    vector<int, vector<int>> results = { };
//    int result = 1;
//
//    for(int i = 0; i < numbers.size() - 1; i++)
//    {
//        results[i] = gcdFunc(result, numbers[i + 1]);
//    }
//
//
//}
//
//int getInputNumber(int min, int max)
//{
//    string errorMsg = "Please enter an integer from "
//        + to_string(min) + " to "
//        + to_string(max) + "!\n";
//    string input;
//    int result = 0;
//
//    while(result < min)
//    {
//        cin >> input;
//        try
//        {
//            result = stoi(input);
//
//            if(result <= 0)
//            {
//                cout << "Please enter an integer from " << errorMsg;
//            }
//        }
//        catch(invalid_argument const & e)
//        {
//            cout << "The input couldn't be parsed as a number. " << errorMsg;
//        }
//        catch(out_of_range const & e)
//        {
//            cout << "The input was not in the range of numbers supported by this type."
//                << errorMsg;
//        }
//    }
//
//    return stoi(input);
//}
//
//int getGCDviaDivision(int a, int b)
//{
//    while(a != 0 && b != 0)
//    {
//        if(a > b)
//        {
//            a = a % b;
//        }
//        else
//        {
//            b = b % a;
//        }
//    }
//
//    return a + b;
//}
//
//int getGCDviaSubstraction(int a, int b)
//{
//    while(a != b)
//    {
//        if(a > b)
//        {
//            a = a - b;
//        }
//        else
//        {
//            b = b - a;
//        }
//    }
//
//    return a;
//}
//
//bool setGcdOptions(function<int(int, int)> & gcd, string & msg, int option)
//{
//    msg.clear();
//
//    if(option <= 0)
//    {
//        cout << "Finding the GCD via (enter of a number) ?.." << endl;
//        cout << "1) Division" << endl;
//        cout << "2) Substraction" << endl;
//        cout << "3) Both methods" << endl;
//    }
//
//    while(option <= 0)
//    {
//        option = getInputNumber(1, 3);
//    }
//
//    if(option == 1)
//    {
//        gcd = getGCDviaDivision;
//        msg = "The GCD (via division) of the entered numbers ";
//    }
//    else if(option == 2)
//    {
//        gcd = getGCDviaSubstraction;
//        msg = "The GCD (via substraction) of the entered numbers ";
//    }
//    else if(option >= gcdOptions + 1)
//    {
//        return false;
//    }
//
//    return true;
//}