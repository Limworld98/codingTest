#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	vector<int> first = { 1, 2, 3, 4, 5 };
	vector<int> second = { 2, 1, 2, 3, 2, 4, 2, 5 };
	vector<int> third = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };

	int fidx = 0, sidx = 0, tidx = 0;
	vector<int>scores = { 0,0,0 };

	for (int i = 0; i < answers.size(); i++)
	{
		if (fidx == first.size())
			fidx = 0;
		if (sidx == second.size())
			sidx = 0;
		if (tidx == third.size())
			tidx = 0;


		if (first[fidx++] == answers[i])
			scores[0]++;
		if (second[sidx++] == answers[i])
			scores[1]++;
		if (third[tidx++] == answers[i])
			scores[2]++;

	}

	int maxscore = max(max(scores[0], scores[1]), scores[2]);

	for (int i = 0; i < 3; i++)
		if (maxscore == scores[i])
			answer.push_back(i+1);

	return answer;
}
