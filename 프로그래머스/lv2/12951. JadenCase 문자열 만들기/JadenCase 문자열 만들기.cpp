#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
	string answer = "";
	bool flag = true;
	for (int i = 0; i < s.size(); i++) {
		if (flag == true && s[i] >= 'a' && s[i] <= 'z')
			answer += (s[i] - 32);

		if (flag == false && s[i] >= 'A' && s[i] <= 'Z')
			answer += (s[i] + 32);

		if (i != answer.size() - 1)
			answer += s[i];

		if (s[i] == ' ')
			flag = true;
		else
			flag = false;
	}

	return answer;
}