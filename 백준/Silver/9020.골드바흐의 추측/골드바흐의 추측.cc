#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <queue>

# define MY_PI 3.14159265358979323846

using namespace std;

int main()
{
	
	int t, n, count = 0, temp1 = 2,temp2 = 2;
	cin >> t;
	while (t-- > 0)
	{
		cin >> n;

		int *pNum = new int[n+1];
		for (int i = 2; i <= n; i++)
			pNum[i] = true;

		for (int i = 2; i*i <= n; i++)
		{
			if (pNum[i])
				for (int j = i * i; j <= n; j += i)
					pNum[j] = false;
		}
		
		for (int i = 2; i <= n / 2; i++)
		{
			if (pNum[i] == true && i >= temp1)
				temp1 = i;
			if (pNum[n - temp1] == true)
				temp2 = temp1;
		}

		cout << temp2 << " " << n - temp2 << endl;
		delete pNum;
		count = 0; temp1 = 2; temp2 = 0;
	}
}


