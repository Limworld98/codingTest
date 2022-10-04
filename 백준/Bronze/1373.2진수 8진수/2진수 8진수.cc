#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <stack>
#include <vector>
using namespace std;

#define MAX_ARY 1000001
#define MAX 1000000
#define THIS_MAX 1000000000

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//--------------------------------------

	string str;
	cin >> str;

	if (str.length() % 3 == 1)
	{
		cout << str[0];
	}
	else if (str.length() % 3 == 2)
	{
		cout << ((str[0] - '0')*2 + (str[1] - '0'));
	}

	for (int i = str.length() % 3; i < str.length(); i+= 3)
	{
		cout << ((str[i] - '0') * 4 + (str[i + 1] - '0') * 2 + (str[i + 2] - '0'));
	}

}