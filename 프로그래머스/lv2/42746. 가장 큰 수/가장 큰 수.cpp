#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> numbers) {
	string answer = "";
	vector<pair<string, int>> temp;

	for (int i = 0; i < numbers.size(); i++)
	{
		string tempstr = to_string(numbers[i]);
		for (int j = 0; j < 2; j++)
			tempstr += tempstr;

		temp.push_back({ tempstr.substr(0,4),to_string(numbers[i]).size() });
	}
	sort(temp.rbegin(), temp.rend());

	for (int i = 0; i < temp.size(); i++)
		answer += temp[i].first.substr(0, temp[i].second);

	vector<char> temp2;

	for (int i = 0; i < answer.length(); i++)
		temp2.push_back(answer[i]);

	sort(temp2.begin(), temp2.end());
	temp2.erase(unique(temp2.begin(), temp2.end()), temp2.end());
	
	
	if (temp2.size() == 1 && temp2[0] == '0')
		answer = "0";
	
	return answer;
}
