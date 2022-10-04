#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	map<string, int> temp;
	string answer = "";

	for (string name : participant)
		temp[name]++;
	
	for (string name : completion)
		temp[name]--;

	for (auto it : temp)
		if (it.second > 0)
		{
			answer = it.first;
			break;
		}

	return answer;
}
