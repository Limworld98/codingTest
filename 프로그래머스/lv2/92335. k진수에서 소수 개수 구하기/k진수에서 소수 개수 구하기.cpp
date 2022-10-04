#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

string notationChange(int n, int k) {
	string result = "";
	while (n / k > 0) {
		result += to_string(n % k);
		n /= k;
	}
	result += to_string(n % k);

	if (result != "")
		reverse(result.begin(), result.end());
	return result;
}

int solution(int n, int k) {

	int answer = 0;
	long int tempInt;
	int primeCount = 0;
	string changed = notationChange(n, k);
	string temp = "";

	for (int i = 0; i < changed.size(); i++) {
		primeCount = 0;
		tempInt = 0;
		temp = "";
		if (changed[i] != '0') {
			while (i < changed.size() && changed[i] != '0') {
				temp += changed[i];
				i++;
			}
			i--;
		}

		if (temp != "") { // 소수인지 확인
			tempInt = stol(temp);
			for (long int j = 2; j <= sqrt(tempInt); j++)
				if (tempInt % j == 0)
					primeCount++;

			if (primeCount == 0 && tempInt >= 2)
				answer++;

		}
	}

	return answer;
}