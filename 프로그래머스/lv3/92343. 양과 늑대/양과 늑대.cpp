#include <string>
#include <vector>
#include <set>
#include <iostream>

using namespace std;

vector<int> adjList[20];

int answer = 0;

void dfs(int current, vector<int> available, vector<int> info, int sheep, int wolf) {

	
	if (info[current] == 0)
		sheep++;
	else
		wolf++;


	if (sheep > wolf && sheep > answer) //최대 결과값 갱신
		answer = sheep;

	if (wolf >= sheep)
		return;
	
	for (auto it = available.begin(); it < available.end(); it++)
		if (*it == current) {
			available.erase(it);
			break;
		}


	for (int i = 0; i < adjList[current].size(); i++)
		available.push_back(adjList[current][i]);

	for (int i = 0; i < available.size(); i++)
		dfs(available[i], available, info, sheep, wolf);

}

int solution(vector<int> info, vector<vector<int>> edges) {

	int sheep = 0;
	int wolf = 0;
	vector<int> available;

	for (int i = 0; i < edges.size(); i++)
		adjList[edges[i][0]].push_back(edges[i][1]);

	available.push_back(0);
	dfs(0, available, info, sheep, wolf);

	return answer;
}
