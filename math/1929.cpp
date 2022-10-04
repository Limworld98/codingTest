#include <iostream>
#include <cmath>

#define MY_PI 3.14159265358979323846
#define MAX 1000001

using namespace std;

int ary[MAX]; 

int main()
{
	int m, n;
	cin >> m >> n;

	//배열 1로 초기화
	for (int i = 2; i <= 1000000; i++)
	{
		ary[i] = 1;
	}


	// 에라토스테네스의 체
	for (int i = 2; i <= sqrt(1000000); i++)
		for (int j = i * i; j <= 1000000; j += i)
			ary[j] = 0; //소수가 아닐경우 배열의 값을 0으로 변경

	//배열의 값이 1일경우 소수로 출력
	for (int i = m; i <= n; i++)
	{
		if (ary[i] == 1)
			cout << i << '\n';
	}
}
