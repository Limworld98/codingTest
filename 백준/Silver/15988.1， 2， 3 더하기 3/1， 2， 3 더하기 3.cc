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


	int n;
	cin >> n;

	solution[1] = 1;
	solution[2] = 2;
	solution[3] = 4;

	for (int i = 4; i < SOL; i++)
		solution[i] = (solution[i - 1] + solution[i - 2] + solution[i - 3]) % MOD;


	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;

		cout << solution[m] % MOD <<'\n';
	}
}