#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define PRICE_MAX 1001
#define PACK_MAX 10001

int price[PRICE_MAX];
int pack[PACK_MAX];

int main()
{
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++)
		cin >> pack[i];

	for (int i = 1; i <= n; i++)
	{
		price[i] = pack[i];

		for(int j = i; j >= 0; j--)
		price[i] = max(price[i - j] + price[j], price[i]);

	}

	cout << price[n];

}