#include <string>
#include <vector>

using namespace std;

int binary(int n) {
	int ans = 0;

	while (n > 0) {
		if (n % 2 == 1)
			ans ++;
		n /= 2;
	}

	return ans;
}

int solution(int n) {
	int answer = binary(n);

	while (1) {
		n++;
		int tempi = binary(n);
		if (answer == tempi)
			break;
	}

	return n;
}