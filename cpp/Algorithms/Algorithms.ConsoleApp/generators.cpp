#include "generators.h"

struct GcdModel
{
	int result = 1;
	int * data = { };

public:
	GcdModel(int nSize)
	{
		this->result = result;
		this->data = new int[nSize];
	}
	
	GcdModel(int result, int nSize)
	{
		this->result = result;
		this->data = new int[nSize];
	}

	~GcdModel()
	{
		delete data;
	}
};


//vector<GcdModel> gcdDataGenerator(int rows, int maxInRow, int max)
//{
//	vector<GcdModel> results = {};
//	int rowNumbers;
//
//	for(size_t i = 0; i < rows; i++)
//	{
//		rowNumbers = (rand() % maxInRow);
//
//		if(rowNumbers < 2)
//		{
//			rowNumbers = 2;
//		}
//
//		cout << rowNumbers << ":";
//
//		for(size_t j = 0; j < rowNumbers; j++)
//		{
//			cout << "\t" << (rand() % max) + 1 << ",";
//		}
//		cout << endl;
//	}
//
//	return results;
//}

