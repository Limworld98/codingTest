#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int arr[31];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	 
	arr[1] = 0;
	arr[2] = 3;
	arr[3] = 0;
	arr[4] = 11;
	for (int i = 5; i <= 30; i++) {
		if (i % 2 != 0)
			arr[i] = 0;
		else {
			int j = 4;
			while (j < i-2) {
				arr[i] += arr[j] * 2;
				j += 2;
			}
			arr[i] += arr[i - 2] * arr[2];
			arr[i] += 8;

		}
	}

	cout << arr[n];

	
}