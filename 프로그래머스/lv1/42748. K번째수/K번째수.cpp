#include <string>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) 
{
	vector<int> answer;
	
	for (int i = 0; i < commands.size(); i++)
	{
		vector<int> temp; //원래 배열이 섞이면 안되므로 임시 배열 생성
		
		for (int j = commands[i][0]-1; j < commands[i][1]; j++)
			temp.push_back(array[j]);

		sort(temp.begin(), temp.end());
		answer.push_back(temp[commands[i][2]-1]);
	}

	return answer;
}