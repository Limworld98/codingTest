#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

long long int ans[91];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	long long int last_num[2]; // 마지막자리수의 0 과 1의 개수;
	long long int temp_last[2];

	ans[1] = 1;
	ans[2] = 1;
	ans[3] = 2;

	temp_last[0] = 1;
	temp_last[1] = 1;

	for (int i = 4; i < 91; i++)
	{
		last_num[0] = temp_last[0] + temp_last[1];
		last_num[1] = temp_last[0];

		ans[i] = last_num[0] + last_num[1];

		temp_last[0] = last_num[0];
		temp_last[1] = last_num[1];
	}

	int n;
	cin >> n;
	cout << ans[n] << '\n';
}