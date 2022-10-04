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

	for (int i = 0; i < n; i++)
		for (int j = 0; j < i; j++)
			if (input[i] > input[j])
				ans[i] = max(ans[i], ans[j] + 1);

	int maxindex = 0;
	int maxnum = 0;

	for (int i = 0; i < n; i++)
	{
		if (ans[i] > maxnum)
		{
			maxnum = ans[i];
			maxindex = i;
		}

	}

	cout << maxnum << '\n';

	//-------------------최대값을 기준으로 역으로 진행하면서 stack에 넣는다.

	stack<int> ans2;

	ans2.push(input[maxindex]);

	for (int i = maxindex; i >= 0; i--)
	{
		for (int j = i; j >= 0; j--)
		{
			if (ans[i] == maxnum && input[i] > input[j] && ans[j] + 1 == ans[i])
			{
				ans2.push(input[j]);
				maxnum--;
			}
		}

	}

	while (!ans2.empty())
	{
		cout << ans2.top() << " ";
		ans2.pop();
	}

}