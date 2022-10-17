#include <string>
#include <vector>
#include <iostream>

using namespace std;

int maxDiff = 0;
vector<int> answer(1, -1);

bool compare(vector<int> ryan) {
	for (int i = ryan.size() - 1; i >= 0; i--) {
		if (ryan[i] > answer[i])
			return true;
		else if (ryan[i] < answer[i])
			return false;
	}
}

void scoreDiff(vector<int> ryan, vector<int> apeach) {
	int scoreDiff = 0;
	for (int i = 0; i < ryan.size(); i++) {
		if (ryan[i] > apeach[i])
			scoreDiff += (10 - i);
		else if (apeach[i] >= ryan[i] && apeach[i] != 0)
			scoreDiff -= (10 - i);
	}
	
	if (scoreDiff > 0 && scoreDiff >= maxDiff) {
		if (maxDiff == scoreDiff && !compare(ryan))
			return;

		maxDiff = scoreDiff;
		answer = ryan;
	}
}



void dfs(vector<int> ryan, vector<int> apeach, int index, int rest) {
	if (index == ryan.size() || rest == 0) {
		ryan[index - 1] += rest;
		scoreDiff(ryan, apeach);
		ryan[index - 1] -= rest;
		return;
	}
	if (apeach[index] < rest) {
		ryan[index] += (apeach[index] + 1);
		dfs(ryan, apeach, index + 1, rest - (apeach[index] + 1));
		ryan[index] -= (apeach[index] + 1);
	}
	dfs(ryan, apeach, index + 1, rest);
}


vector<int> solution(int n, vector<int> info) {
	vector<int> ryan(11, 0);
	dfs(ryan, info, 0, n);
	if (answer.empty())
		answer.push_back(-1);
	return answer;
}
