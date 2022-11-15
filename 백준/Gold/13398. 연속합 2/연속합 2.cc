#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int arr[100001];
int dp[100001];
int dpr[100001];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> arr[i];
	dp[1] = arr[1];
	dpr[1] = arr[1];

	for (int i = 2; i <= n; i++) {
		dp[i] = max(arr[i], arr[i] + dp[i - 1]);
		dpr[i] = max(dp[i - 1], dpr[i - 1] + arr[i]);
	}
	
	int max = dp[1];

	for (int i = 2; i <= n; i++)
		if (dp[i] > max)
			max = dp[i];
	
	int maxr = dpr[1];

	for (int i = 2; i <= n; i++)
		if (dpr[i] > maxr)
			maxr = dpr[i];

	if (max > maxr)
		cout << max;
	else
		cout << maxr;
}