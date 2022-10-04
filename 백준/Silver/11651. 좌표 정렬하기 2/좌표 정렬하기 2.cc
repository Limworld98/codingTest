#include <iostream>
#include <algorithm>
#include <vector>

#define MAX 10000000

using namespace std;


int main()
{
	int n;  cin >> n;
	vector<vector<int>> temp(n, vector<int>(2));
	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j >= 0; j--)
			cin >> temp[i][j];
	}

	sort(temp.begin(), temp.end());

	for (int i = 0; i < n; i++)
	{
		for (int j = 1; j >= 0; j--)
			cout << temp[i][j] << " ";
		
		cout << '\n';
	}
}