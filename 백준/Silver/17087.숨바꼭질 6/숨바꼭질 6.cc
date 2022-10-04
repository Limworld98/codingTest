#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

#define MAX_ARY 1000001
#define MAX 1000000
#define THIS_MAX 1000000000

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//--------------------------------------
	
	vector<int> ans;

	int n; // 동생의 수
	cin >> n;
	
	int m;
	cin >> m; //수빈이의 위치
	int* ary = new int[n];
	int* distance = new int[n];

	for (int i = 0; i < n; i++)
	{
		cin >> ary[i]; //동생들의 위치
	}

	if (n == 1) //동생이 한명일경우
	{
		cout << abs(m - ary[0]);
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			distance[i] = abs(m - ary[i]);
		}

		sort(distance, distance + n);


		for (int i = 0; i < n - 1; i++)
		{
			int a, b, temp;

			a = distance[i];
			b = distance[i + 1];

			while (b != 0)
			{
				temp = a % b;
				a = b;
				b = temp;
			}
			ans.push_back(a);
		}

		sort(ans.begin(),ans.end());

		auto i = ans.begin();
		cout << *i;
	}

}