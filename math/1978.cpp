#include <iostream>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <list>
#include <vector>

#define MY_PI 3.14159265358979323846
#define MAX 1000001
using namespace std;

int ans;

int main()
{
	int n;
	cin >> n;

	while (n-- > 0)
	{
		int j,count = 0;
		cin >> j;
		for (int i = 1; i <= j; i++)
		{
			if (j % i == 0)
				count++;
		}
		if (count == 2)
			ans++;
	}

	cout << ans;
}

