#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

#define MOD 1000000000

long long int ans[101];
long long int endnum[10];
long long int tempnum[10];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------


	endnum[0] = 0;
	endnum[1] = 1;
	endnum[2] = 1;
	endnum[3] = 1;
	endnum[4] = 1;
	endnum[5] = 1;
	endnum[6] = 1;
	endnum[7] = 1;
	endnum[8] = 1;
	endnum[9] = 1;

	ans[1] = 9;

	for (int i = 0; i < 10; i++)
		tempnum[i] = endnum[i] ;

	int n;
	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		long long int sum = 0;

		for (int j = 0; j < 10; j++)
			tempnum[j] = endnum[j];

		for (int j = 0; j < 10; j++)
		{
			if (j == 0)
				endnum[j] = tempnum[1];
			else if (j == 9)
				endnum[j] = tempnum[8];
			else
				endnum[j] = (tempnum[j - 1]%MOD + tempnum[j + 1]%MOD);

			sum += endnum[j] % MOD;
		}

		ans[i] = sum;
	}

	cout << ans[n] % MOD << '\n';
}