#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define SOL 100001
#define MOD 1000000009

long long int solution[SOL][4];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	solution[1][1] = 1;
	solution[2][2] = 1;
	solution[3][1] = 1;
	solution[3][2] = 1;
	solution[3][3] = 1;

	for (int i = 4; i < SOL; i++)
	{
		solution[i][1] = (solution[i - 1][2] + solution[i - 1][3]) % MOD;
		solution[i][2] = (solution[i - 2][1] + solution[i - 2][3]) % MOD;
		solution[i][3] = (solution[i - 3][1] + solution[i - 3][2]) % MOD;
		
	}

	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int m;
		cin >> m;
		cout << (solution[m][1] + solution[m][2] + solution[m][3]) % MOD << '\n';
	}
}