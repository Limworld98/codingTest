#include <string>
#include <iostream>
#include <vector>

using namespace std;

string solution(string new_id) {
	string answer = "";
	vector<char> str;

	//string to vector
	for (int i = 0; i < new_id.length(); i++)
		str.push_back(new_id[i]);

	//step 1
	for (int i = 0; i < str.size(); i++)
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += ('a' - 'A');

	//step 2
	for (int i = 0; i < str.size(); i++)
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || (str[i] == '-') || (str[i] == '_') || (str[i] == '.'))
			continue;
		else
			str.erase(str.begin() + i--);

	
	//step 3
	char temp = NULL;
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == '.')
			if (temp == '.')
				str.erase(str.begin() + i--);

		temp = str[i];
	}

	//step 4
	if (!str.empty())
		if (str[0] == '.')
			str.erase(str.begin());
	
	if (!str.empty())
		if (str[str.size() - 1] == '.')
			str.pop_back();
	
	//step 5
	if (str.empty())
		str.push_back('a');

	//step 6
	if (str.size() > 15)
		str.erase(str.begin() + 15, str.end());
	if (str[str.size() - 1] == '.')
		str.pop_back();

	//step 7
	if (str.size() < 3)
		while (str.size() != 3)
			str.push_back(str[str.size() - 1]);

	//vector to string
	for (int i = 0; i < str.size(); i++)
		answer += str[i];

	return answer;
}