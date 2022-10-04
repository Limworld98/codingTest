#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

int ary[1001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	for (int i = 1; i <= 99; i++)
		ary[i] = true;

	for (int i = 100; i < 1000; i++)
	{
		int temp = i;
		int k = 100;
		int a,b,c;

		a = temp / k;
		temp %= k;
		k /= 10;
		b = temp / k;
		temp %= k;
		k /= 10;
		c = temp / k;
		
		if ((a - b) == (b - c))
			ary[i] = true;
	}

	int n;
	cin >> n;

	int count = 0;

	for (int i = 1; i <= n; i++)
	{
		if (ary[i] == true)
			count++;
	}

	cout << count;

}