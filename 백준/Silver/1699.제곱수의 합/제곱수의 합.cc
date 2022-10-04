#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

#define MAX 100001

int ans[MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		ans[i] = i;
		for (int j = 1; j * j <= i; j++)
		{
			if (ans[i - j * j] + 1 <= ans[i])
				ans[i] = ans[i - j * j] + 1;
		}
	}

	cout << ans[n];
	
	
}