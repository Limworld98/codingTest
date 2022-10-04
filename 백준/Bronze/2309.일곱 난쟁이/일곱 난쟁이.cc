#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

#define MAX_ARY 1000001
#define MAX 1000000
#define THIS_MAX 1000000000 //10억

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//--------------------------------------
	int n = 9,sum = 0;
	int *ary = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		cin >> ary[i];
	}

	sort(ary, ary + n);

	for (int i = 0; i < n; i++)
	{
		sum += ary[i];
	}

	for (int i = 0; i < n-1; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if ((sum - ary[i] - ary[j]) == 100)
			{
				for (int k = 0; k < n; k++)
				{
					if (k != i && k != j)
						cout << ary[k] << '\n';
				}

				return 0;
			}
		}
	}
}