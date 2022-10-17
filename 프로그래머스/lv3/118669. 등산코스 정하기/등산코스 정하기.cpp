#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>

#define MAXPATHNUM 50001
#define MAXINTENSITY 10000001

using namespace std;

set<pair<int, int>> map[MAXPATHNUM];
char mapStatus[MAXPATHNUM];
int intensities[MAXPATHNUM];

//return : minimum intensity , lowest summit

vector<int> solution(int n, vector<vector<int>> paths, vector<int> gates, vector<int> summits) {

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> bfs;
	vector<pair<int, int>> IntensityAndSummit;
	sort(paths.begin(), paths.end());
	sort(summits.begin(), summits.end());

	for (int i = 0; i < gates.size(); i++) 
		mapStatus[gates[i]] = 'g';
	
	for (int i = 0; i < summits.size(); i++) 
		mapStatus[summits[i]] = 's';
	

	for (int i = 0; i < paths.size(); i++) {
		if (mapStatus[paths[i][0]] == 'g' || mapStatus[paths[i][1]] == 's') 
			map[paths[i][0]].insert(make_pair(paths[i][1], paths[i][2]));
		else if (mapStatus[paths[i][1]] == 'g' || mapStatus[paths[i][0]] == 's')
			map[paths[i][1]].insert(make_pair(paths[i][0], paths[i][2]));
		else {
			map[paths[i][0]].insert(make_pair(paths[i][1], paths[i][2]));
			map[paths[i][1]].insert(make_pair(paths[i][0], paths[i][2]));
		}
	}

	for (int i = 0; i < n + 1; i++)
		intensities[i] = MAXINTENSITY;

	for (int i = 0; i < gates.size(); i++) {
		intensities[gates[i]] = 0;
		bfs.push(make_pair(intensities[gates[i]], gates[i]));
	}
	
	while (!bfs.empty()) {
		int intensity = bfs.top().first;
		int current = bfs.top().second;
		bfs.pop();

		if (intensities[current] < intensity)
			continue;
		for (auto& temp : map[current]) {
			if (intensities[temp.first] > max(intensity, temp.second)) {
				intensities[temp.first] = max(intensity, temp.second);
				bfs.push(make_pair(intensities[temp.first], temp.first));
			}
		}

	}

	for (int i = 0; i < summits.size(); i++)
		IntensityAndSummit.push_back(make_pair(intensities[summits[i]], summits[i]));

	sort(IntensityAndSummit.begin(), IntensityAndSummit.end());

	cout << IntensityAndSummit[0].second << " " << IntensityAndSummit[0].first << endl;

	vector<int> answer;
	answer.push_back(IntensityAndSummit[0].second);
	answer.push_back(IntensityAndSummit[0].first);
	return answer;
}