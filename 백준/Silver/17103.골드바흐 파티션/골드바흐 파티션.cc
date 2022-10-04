#include <iostream>
#include <cmath>
#include <string>
using namespace std;

#define MAX_ARY 1000001
#define MAX 1000000



int ary[MAX_ARY]; //체를 이용한다

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//--------------------------------------

	for (int i = 2; i < MAX_ARY; i++) // 변수 초기화
		ary[i] = 1;


	for (int i = 2; i < sqrt(MAX_ARY); i++) //체 사용,O(N)
	{
		for (int j = i * i; j < MAX_ARY; j += i)
		{
			ary[j] = 0;
		}
	}


	int k;
	cin >> k;
	while (k-- >0)
	{
		int n,count = 0;
		cin >> n; //테스트케이스 정수 입력받기
		if (n == 0) //0 입력받을시 종료
			break;

		int a = -1, b = -1; //초기값을 -1 , -1로 지정
		for (int i = 2; i <= n/2; i++)
		{
			if (ary[i] == 1 && ary[n - i] == 1)
			{
				count++;
			}
		}

		cout << count << '\n';
	}
}