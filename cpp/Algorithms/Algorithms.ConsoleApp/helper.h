#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int stringToInt(string strData, int defaultNumber);

string vectorToString(vector<int> numbers, const char * start, const char * end);

vector<int> readStringNumbers(string strNumbers);

vector<vector<int>> readFileNumbers(const char * filePath, const char separator);
