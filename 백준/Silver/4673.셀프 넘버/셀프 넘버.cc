#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

int ary[10001];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------



	for (int i = 1; i < 10001; i++)
	{
		int self = i;
		int temp = i;
		int k = 0; 
		
		if (i < 10)
			k = 1;
		else if (i < 100)
			k = 10;
		else if (i < 1000)
			k = 100;
		else if (i < 10000)
			k = 1000;


		while (temp != 0 && k != 0)
		{
			self += temp / k;
			temp = temp % k;
			k /= 10;
		}

		if(self < 10000)
			ary[self] = true;
	}

	for (int i = 1; i < 10000; i++)
	{
		if(ary[i] == false)
		cout << i << '\n';
	}
}