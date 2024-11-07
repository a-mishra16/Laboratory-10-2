/*
* Project: Laboratory 10-2
* Author: Aanika Mishra
* Date: 11-7-2024
* Description: This program intakes a string statement from the user and counts and returns the number of words.
*/

#include <iostream> 
#include <iomanip>
#include <string>

using namespace std;

int count_words(string str);

int main()
{
	string quote;
	getline(cin, quote);

	cout << count_words(quote);
}

int count_words(string str)
{
	int count = 1;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
		{
			count++;
		}
	}
	return count;
}