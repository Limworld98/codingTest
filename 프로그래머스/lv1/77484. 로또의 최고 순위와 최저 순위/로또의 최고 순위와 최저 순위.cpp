#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
	vector<int> answer;
	int blank = 0, match = 0, min = 6, max = 6;
	for (int i = 0; i < 6; i++)
	{

		if (lottos[i] == 0) //0 1개당 blank 1 증가
			blank++;
		else // 0이 아닐경우 win_nums와 대조하기	
			for (int j = 0; j < 6; j++)
				if (lottos[i] == win_nums[j])
				    match++;	
	}

	// 모든 대조를 마친 뒤 최소, 최대값 갱신
	if (match == 0 && blank < 2) //6등인경우
	{
		min = 6;
		max = 6;
	}
	else 
	{
		min -= (match - 1);
		max -= (match - 1 + blank);
	}
	if (min > 6)
		min = 6; //전부 0인경우의 예외케이스 처리
	answer.push_back(max);
	answer.push_back(min);
	return answer;
}