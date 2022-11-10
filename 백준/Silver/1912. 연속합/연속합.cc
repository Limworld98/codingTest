#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

#define MAX 100001

int input[MAX];
int ans[MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> input[i];

	ans[0] = input[0];

	for (int i = 1; i < n; i++)
	{
		ans[i] = max(input[i],input[i] + ans[i - 1]);
	}

	sort(ans, ans + n);
	cout << ans[n-1];
	
}