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