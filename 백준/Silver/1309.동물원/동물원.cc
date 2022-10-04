#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

#define MAX 100001
#define MOD 9901

long long int ans[MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	ans[1] = 3;
	ans[2] = 7;
	for (int i = 3; i < MAX; i++)
		ans[i] = (ans[i - 1] * 2 + ans[i - 2])%MOD;

	int n;
	cin >> n;
	cout << ans[n];

}