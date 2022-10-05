#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

int document[10000][4]; // [0] 시간 기록 [1] 누적 시간 [2] 출입 기록(0= 출 ,1 = 입) [3] 요금

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
	vector<int> answer;
	vector<int> carNums;
	int time = fees[0];
	int fee = fees[1];
	double unitTime = fees[2];
	int unitFee = fees[3];

	int carNum;
	int tempTime;

	for (int i = 0; i < records.size(); i++) {
		carNum = stoi(records[i].substr(6, 10));
		tempTime = (records[i][0] - '0') * 600 + (records[i][1] - '0') * 60 + stoi(records[i].substr(3, 5));
		if (records[i].substr(11, 13) == "IN") { //입차
			document[carNum][2] = 1;
			document[carNum][0] = tempTime;
		}
		else { //출차
			document[carNum][2] = 0;
			document[carNum][1] += tempTime - document[carNum][0];
			document[carNum][0] = 0;
		}

		if (find(carNums.begin(), carNums.end(), carNum) == carNums.end())
			carNums.push_back(carNum);

	}

	sort(carNums.begin(), carNums.end());

	for (int i = 0; i < carNums.size(); i++) { //요금 정산
		carNum = carNums[i];
		if (document[carNum][2] != 0) //출차처리가 되어있지 않은 경우
			document[carNum][1] += 1439 - document[carNum][0];


		if (document[carNum][1] <= time)
			document[carNum][3] = fee;
		else {
			cout.precision(1);
			document[carNum][3] += fee;
			document[carNum][3] += ceil((double(document[carNum][1] - time) / unitTime)) * unitFee;
		}

		answer.push_back(document[carNum][3]);


	}


	return answer;
}
