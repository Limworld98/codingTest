#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

int main()
{
	int ary[12];

	int n;
	cin >> n;

	ary[1] = 1;
	ary[2] = 2;
	ary[3] = 4;

	for (int i = 4; i < 12; i++)
		ary[i] = ary[i - 1] + ary[i - 2] + ary[i - 3];

	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		cout << ary[m] << '\n';
	}
}