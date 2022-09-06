#pragma once
#include <iostream>
#include <random>
#include <vector>

using namespace std;

struct GcdModel
{
	int result = 1;
	int * data = { };

public:
	GcdModel(int nSize);
	/*
	{
		this->result = result;
		this->data = new int[nSize];
	}
	*/
	GcdModel(int result, int nSize);
	/*
	{
		this->result = result;
		this->data = new int[nSize];
	}
	*/

	~GcdModel();
	/*
	{
		delete data;
	}
	*/
};

//vector<GcdModel> gcdDataGenerator(int rows, int maxInRow, int max);