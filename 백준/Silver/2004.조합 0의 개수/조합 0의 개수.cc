#include <iostream>
#include <cmath>
#include <string>
using namespace std;

#define MAX_ARY 1000001
#define MAX 1000000


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//--------------------------------------

	long long int n, m;
	long long int a_5 = 0, a_2 = 0, b_5 = 0, b_2 = 0, c_5 = 0, c_2 = 0;
	cin >> n >> m;

	for (long long int i = 2; i <= n; i *= 2)
		a_2 += (n / i);

	for (long long int i = 5; i <= n; i *= 5)
		a_5 += (n / i);


	for (long long int i = 2; i <= m; i *= 2)
		b_2 += (m / i);
	for (long long int i = 5; i <= m; i *= 5)
		b_5 += (m / i);

	for (long long int i = 2; i <= n - m; i *= 2)
		c_2 += (n - m) / i;
	for (long long int i = 5; i <= n - m; i *= 5)
		c_5 += (n - m) / i;

	a_2 -= (b_2 + c_2);
	a_5 -= (b_5 + c_5);

	cout << min(a_2, a_5);


}