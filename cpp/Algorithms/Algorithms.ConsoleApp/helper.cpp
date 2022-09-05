#include "helper.h"


string vectorToString(vector<int> numbers, const char * start, const char * end)
{
	string result = start;
	result.append(to_string(numbers[0]));
	for(int i = 1; i < numbers.size(); i++)
	{
		result.append(", ");
		result.append(to_string(numbers[i]));
	}
	result.append(end);

	return result;
}

int stringToInt(string strData, int defaultNumber)
{
    int result;
    try
    {
        result = stoi(strData);
    }
    catch(invalid_argument const & e)
    {
        cout << "The input couldn't be parsed as a number.";
		result = defaultNumber;
    }
    catch(out_of_range const & e)
    {
        cout << "The input was not in the range of numbers supported by this type.";
		result = defaultNumber;
	}

    return result;
}

vector<int> readStringNumbers(string strNumbers)
{
	istringstream streamNumbers(strNumbers);
	string strNumber;
	vector<int> result;
	int number;

	while(streamNumbers.good())
	{
		getline(streamNumbers, strNumber, ',');

		if(strNumber.empty())
		{
			continue;
		}


		number = stringToInt(strNumber, 0);

		result.push_back(number);
	}

	return result;
}

vector<vector<int>> readFileNumbers(const char * filePath, const char separator)
{
	ifstream fileData;
	string strData;
	
	vector<vector<int>> numbersData = { };

	fileData.open(filePath);

	if(fileData.is_open())
	{
		while(fileData.good())
		{
			getline(fileData, strData, '\n');

			numbersData.push_back(readStringNumbers(strData));
		}
	}

	fileData.close();

	return numbersData;
}

