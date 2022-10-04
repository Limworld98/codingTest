#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <math.h>
#include <algorithm>

using namespace std;

#define MAX 100001

int ans[MAX];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------
	vector<int> ans;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++)
		ans.push_back(str[i] - '0');

	sort(ans.rbegin(), ans.rend());

	for (auto it = ans.begin(); it < ans.end(); it++)
		cout << *it ;
	
}