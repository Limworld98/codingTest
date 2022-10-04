#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define MAX 1000001

int ary[MAX];

int main()
{
	int n;
	cin >> n;

	ary[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		ary[i] = ary[i - 1] + 1;

		if (i % 3 == 0)
			ary[i] = min(ary[i], ary[i / 3] + 1);

		if (i % 2 == 0)
			ary[i] = min(ary[i], ary[i / 2] + 1);
	}

	cout << ary[n];

}