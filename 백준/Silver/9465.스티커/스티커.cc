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

	int t;
	cin >> t;


	while (t-- > 0)
	{
		int n;
		cin >> n;
		vector<vector<int>> ans(2, vector<int>(n));

		for (int i = 0; i < 2; i++)
			for (int j = 0; j < n; j++)
				cin >> ans[i][j];

		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (i == 1)
				{
					if (j == 0)
						ans[j][i] += ans[1][0];
					else if (j == 1)
						ans[j][i] += ans[0][0];
				}

				else
				{
					if (j == 0)
						ans[j][i] += max(ans[1][i - 2], ans[1][i - 1]);
					else if (j == 1)
						ans[j][i] += max(ans[0][i - 2], ans[0][i - 1]);
				}
			}
		}

		cout << max(ans[0][n - 1], ans[1][n - 1]) << '\n';


		
	}

	
}