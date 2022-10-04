#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define MAX 1001

long long int ary[MAX];


int main()
{
	int n;
	cin >> n;

	ary[1] = 1;
	ary[2] = 3;

	for (int i = 3; i <= n; i++)
	{
		ary[i] = (ary[i - 1] + ary[i - 2]*2) % 10007;
	}

	cout << ary[n] % 10007;

}