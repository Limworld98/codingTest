#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long int makeSum(vector<int> queue) {
	long long int sum = 0;
	for (int i : queue)
		sum += i;
	return sum;
}

int solution(vector<int> queue1, vector<int> queue2) {
	int answer = 0;
	int qlength = queue1.size() + queue2.size();
	int x1 = 0, x2 = 0;
	long long int sum1 = makeSum(queue1);
	long long int sum2 = makeSum(queue2);

	while (1) {

		if (sum1 == sum2)
			break;
		else if (sum1 > sum2)
		{
			if (x1 < queue1.size()) {
				sum2 += queue1[x1];
				sum1 -= queue1[x1];
			}
			else if (x1 < qlength) {
				sum2 += queue2[x1 - queue1.size()];
				sum1 -= queue2[x1 - queue1.size()];
			}
			else {
				answer = -1;
				break;
			}
			x1++;
		}
		else if (sum2 > sum1)
		{
			if (x2 < queue2.size()) {
				sum1 += queue2[x2];
				sum2 -= queue2[x2];
			}
			else if (x2 < qlength) {
				sum1 += queue1[x2 - queue2.size()];
				sum2 -= queue1[x2 - queue2.size()];
			}
			else {
				answer = -1;
				break;
			}
			x2++;

		}
		answer++;
	}
	return answer;
}