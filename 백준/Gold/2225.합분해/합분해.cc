#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

#define MOD 1000000000

int ncr[401][401];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	int n, k; 
	cin >> n >> k; // 1 <= n <= 200, 1 <= k <= 200

	ncr[0][0] = 1;

	for (int i = 1; i < 401; i++)
	{
		ncr[i][0] = 1;
		for (int j = 1; j <= i; j++)
		{
			ncr[i][j] = ncr[i - 1][j] + ncr[i - 1][j - 1];
			ncr[i][j] %= MOD;
		}
	}

	cout << ncr[n + k - 1][k - 1];




}