#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

int color_value[3][1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	int n; // 2 <= N <= 1000
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> color_value[0][i]; //red
		cin >> color_value[1][i]; //green
		cin >> color_value[2][i]; //blue

		if (i != 0)
		{
			color_value[0][i] += min(color_value[1][i - 1], color_value[2][i - 1]);
			color_value[1][i] += min(color_value[0][i - 1], color_value[2][i - 1]);
			color_value[2][i] += min(color_value[0][i - 1], color_value[1][i - 1]);
		}
	}

	if (color_value[0][n] <= color_value[1][n])
	{
		if (color_value[0][n] <= color_value[2][n])
			cout << color_value[0][n];
		else
			cout << color_value[2][n];
	}
	else
	{
		if (color_value[1][n] <= color_value[2][n])
			cout << color_value[1][n];
		else
			cout << color_value[2][n];
	}
}