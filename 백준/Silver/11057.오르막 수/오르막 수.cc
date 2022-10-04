#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

#define MAX 1001
#define MOD 10007

long long int ans[MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	ans[1] = 10;
	
	long long int last_num[10]; // 0~9;
	long long int temp_num[10];
	last_num[0] = 1;
	last_num[1] = 2;
	last_num[2] = 3;
	last_num[3] = 4;
	last_num[4] = 5;
	last_num[5] = 6;
	last_num[6] = 7;
	last_num[7] = 8;
	last_num[8] = 9;
	last_num[9] = 10;

	ans[2] = 55;

	for (int i = 3; i < MAX; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			temp_num[j] = last_num[j];
		}
		
		for (int j = 0; j < 10; j++)
		{
			last_num[j] = 0;
		}

		for (int j = 0; j < 10; j++)
		{
			for (int k = 0; k <= j; k++)
			{
				last_num[j] += temp_num[k] % MOD;
			}
		}
		
		for (int j = 0; j < 10; j++)
			ans[i] += last_num[j]%MOD;
	}

	int n;
	cin >> n;
	cout << ans[n] % MOD;
}