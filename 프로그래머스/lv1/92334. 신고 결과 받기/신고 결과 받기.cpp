#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
	vector<vector<string>> user_report(id_list.size());
	vector<int> user_reported(id_list.size(),0);
	vector<int> answer(id_list.size(),0);

	for (int i = 0; i < report.size(); i++)
	{
		string report_user = report[i].substr(0, report[i].find(" ")); // 신고한 유저
		string reported_user = report[i].substr(report[i].find(" ")+1, report[i].length()); // 신고당한 유저
		for (int j = 0; j < id_list.size(); j++) //이차원 벡터에 중복없이 유저의 신고 리스트 작성
			if (report_user == id_list[j])
			{
				auto it = find(user_report[j].begin(),user_report[j].end(),reported_user);
				if(it == user_report[j].end())
					user_report[j].push_back(reported_user);
			}
		
	}

	for (int i = 0; i < user_report.size(); i++) // 이차원 벡터를 탐색하며 신고당한 유저를 count
		for (int j = 0; j < user_report[i].size(); j++)
			for (int l = 0; l < id_list.size(); l++)
				if (user_report[i][j] == id_list[l])
					user_reported[l]++;
		

	for (int i = 0; i < user_reported.size(); i++) // k번이상 신고당한 유저를 신고한 유저에게 메일 발송 count
		if (user_reported[i] >= k)
		{
			for (int m = 0; m < user_report.size(); m++)
				for (int n = 0; n < user_report[m].size(); n++)
					if (user_report[m][n] == id_list[i])
						answer[m]++;
				
		}

	return answer;
}