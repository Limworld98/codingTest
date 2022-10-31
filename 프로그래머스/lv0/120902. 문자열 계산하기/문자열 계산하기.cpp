#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
	int answer = 0;
	int temp1;
	string temp;
	vector<string> myVec;
	for (int i = 0; i < my_string.size(); i++) {
		temp = "";
		while (my_string[i] != ' ') {
			if (i == my_string.size())
				break;

			temp += my_string[i++];
		}
		myVec.push_back(temp);
	}
	answer = stoi(myVec[0]);

	for (int i = 1; i < myVec.size(); i++) {
		if (myVec[i] == "+") {
			answer += stoi(myVec[++i]);			
		}
		else if (myVec[i] == "-") {
			answer -= stoi(myVec[++i]);
		}
		else {
			continue;
		}

	}

	return answer;
}
