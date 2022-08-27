#pragma once
#include <functional>
#include <string>

using namespace std;

const int gcdOptions = 2;

int getInputNumber(int min, int max);

int gcd();

int getGCDviaDivision(int a, int b);

int getGCDviaSubstraction(int a, int b);

bool setGcdOptions(function<int(int, int)> & gcd, string & msg, int option);

string numbersToString(const char * start, int * numbers, int nSize, const char * end);

void gcdCalculation(function<int(int, int)> gcd, int * numbers, int nSize, string msg);
