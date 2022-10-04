#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	int n; // 1 <= N <= 1000
	cin >> n;

	vector<int> input(n);
	vector<int> ans(n);

	for (int i = 0; i < n; i++)
		cin >> input[i];

	for (int i = 0; i < n; i++)
		ans[i] = 1;

	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (input[i] > input[j])
				ans[i] = max(ans[i], ans[j] + 1);
		}
	}

	sort(ans.begin(), ans.end());
	cout << ans[n - 1];

}