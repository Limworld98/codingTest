#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

#define MAX_ARY 1000001
#define MAX 1000000

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//--------------------------------------

	int n;
	cin >> n;
	for(int i = 0 ; i < n; i++)
	{
		int m;
		cin >> m;
		int* ary = new int[m];
		for (int j = 0; j < m; j++) // 입력 받기
		{
			cin >> ary[j];
		}
		
		int a, b, temp; 
		long long int sum = 0;
		for (int j = 0; j < m - 1; j++) // GCD 구하기
		{
			for (int l = j + 1; l < m; l++)
			{
				a = max(ary[j], ary[l]);
				b = min(ary[j],ary[l]);
				while (b != 0)
				{
					temp = a % b;
					a = b;
					b = temp;
				}
				sum += a;
			}
			
		}

		cout << sum << '\n';
		
		delete []ary;
	}
}