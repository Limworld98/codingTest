#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

#define MAX_ARY 1000001
#define MAX 1000000
#define THIS_MAX 1000000000 //10억

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//--------------------------------------

	stack<bool> ans;

	int n;
	cin >> n;

	if (n == 0)
		cout << "0";
	else
	{
		while (n != 0)
		{
			if (n % -2 == 0)
			{
				ans.push(0);
				n /= -2;
			}
			else
			{
				ans.push(1);
				n = (n - 1) / -2;
			}
		}

		while (!ans.empty())
		{
			cout << ans.top();
			ans.pop();
		}
	}
}