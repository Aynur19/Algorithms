#pragma once
#include <functional>
#include <string>

using namespace std;

int getGCD();

int getGCDviaDivision(int a, int b);

int getGCDviaSubstraction(int a, int b);

void setGcdOptions(function<int(int, int)> & gcd, string & msg);