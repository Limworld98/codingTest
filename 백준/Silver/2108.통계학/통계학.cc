#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	int n;
	cin >> n;
	vector<int> ans(n);

	for (int i = 0; i < n; i++)
		cin >> ans[i];

	sort(ans.begin(), ans.end());

	//--------------------arithmetic

	double arithmetic = 0;
	for (int i = 0; i < n; i++)
	{
		arithmetic += ans[i];
	}

	arithmetic = (arithmetic) / n;

	cout << round(arithmetic) << '\n';
	//---------------------median

	sort(ans.begin(), ans.end());
	cout << ans[n / 2] << '\n';

	//---------------------mode

	int mode[8001]; // 최빈값을 구하기 위한 배열 할당 
	//음수는 절댓값을 적용하여 1~4000, 양수는 4001~8000을 사용한다.

	for (int i = 0; i < 8001; i++) // 배열 초기화
		mode[i] = 0;

	for (int i = 0; i < n; i++) // 배열 초기화
	{
		if (ans[i] <= 0)
			mode[abs(ans[i])]++;
		else
			mode[ans[i] + 4000]++;
	}

	int temp[8001]; //정렬을 위한 임시 배열

	for (int i = 0; i < 8001; i++)
	{
		temp[i] = mode[i];
	}

	sort(temp, temp + 8001);

	int tempindex = 0;

	if (temp[8000] == temp[7999]) //최빈값이 여러개일때
	{
		int count = 0;
		for (int i = 0; i < 8001; i++)
		{
			if (i < 4001) // -4000~0 구간 탐색
			{
				if (mode[4000 - i] == temp[8000])
				{
					count++;
					tempindex = 4000 - i;
				}

				if (count == 2)
					break;
			}
			else // 0 ~ 4000구간 탐색
			{
				if (mode[i] == temp[8000])
				{
					count++;
					tempindex = i;
				}

				if (count == 2)
					break;
			}
		}
	}
	else //최빈값이 한개일때
	{
		for (int i = 0; i < 8001; i++)
		{
			if (mode[i] == temp[8000])
			{

				tempindex = i;
				break;

			}
		}
	}

	if (tempindex < 4001)
		cout << 0 - tempindex << '\n';
	else
		cout << tempindex - 4000 << '\n';

	//---------------------range

	cout << *(ans.end() - 1) - *ans.begin() << '\n';
}