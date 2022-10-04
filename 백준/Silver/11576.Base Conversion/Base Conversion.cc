#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <stack>
#include <algorithm>

using namespace std;

int main()
{
	int a, b, m;
	int sum = 0;

	stack<int> ans;

	cin >> a >> b;
	cin >> m;

	for (int i = m-1; i >= 0; i--)
	{
		int n;
		cin >> n;
		sum += (n * pow(a, i));
	}

	while (sum)
	{
		ans.push(sum % b);
		sum /= b;
	}
	while (!ans.empty())
	{
		cout << ans.top() << " ";
		ans.pop();
	}
}