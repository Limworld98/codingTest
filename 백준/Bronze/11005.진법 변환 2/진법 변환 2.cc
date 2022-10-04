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

	stack<char> ans;

	int n, b;
	cin >> n >> b;

	if (n == 0)
	{
		cout << 0;
		return 0;
	}

	while (n != 0)
	{
		if ((n % b) > 9)
		{
			ans.push(char('A' + ((n % b) - 10)));
		}
		else
		{
			ans.push(char('0' + (n % b)));
		}

		n /= b;
	}

	while (!ans.empty())
	{
		cout << ans.top();
		ans.pop();
	}

}