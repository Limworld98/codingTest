#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define SOL 1000001
#define MOD 1000000009

long long int solution[SOL];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	int a, b, c;
	cin >> a >> b >> c;

	if ((a == b) && (b == c))
		cout << 10000 + a * 1000;

	else if ((a == b) && (b != c))
		cout << (1000 + (a * 100));

	else if ((b == c) && (a != c))
		cout << (1000 + (b * 100));

	else if ((a == c) && (b != c))
		cout << (1000 + (c * 100));

	else
		cout << max(max(a, b),c) * 100;
}