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

	int n;
	cin >> n;
	vector<vector<int>> ans(n, vector<int>(2));

	for (int i = 0; i < n; i++)
		for (int j = 0; j < 2; j++)
			cin >> ans[i][j];

	sort(ans.begin(), ans.end());

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < 2; j++)
			cout << ans[i][j] << " ";

		cout << '\n';
	}
}