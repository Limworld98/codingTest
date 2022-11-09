#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int arr[1001];
int dpf[1001];
int dpr[1001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		dpf[i] = 1;
		dpr[i] = 1;
	}
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 2; i <= n; i++) {
		for (int j = 1; j < i; j++) {
			if (arr[j] < arr[i])
			{
				dpf[i] = max(dpf[j] + 1, dpf[i]);
			}
		}
	}

	for (int i = n ; i >= 1; i--) {
		for (int j = n; j > i; j--) {
			if (arr[j] < arr[i])
			{
				dpr[i] = max(dpr[j] + 1, dpr[i]);
			}
		}
	}

	int max = dpf[1] + dpr[1] - 1;
	for (int i = 2; i <= n; i++) {
		if (dpf[i] + dpr[i] - 1 >= max)
			max = dpf[i] + dpr[i] - 1;
	}

	cout << max;
}