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

	string str,ans = "";
	cin >> str;
	switch (str[0])
	{
	case'0':
		ans += "0";
		break;

	case '1':
		ans += "1";
		break;

	case '2':
		ans += "10";
		break;

	case '3':
		ans += "11";
		break;

	case '4':
		ans += "100";
		break;

	case '5':
		ans += "101";
		break;

	case '6':
		ans += "110";
		break;

	case '7':
		ans += "111";
		break;
	}

	for (int i = 1; i < str.length(); i++)
	{
		switch (str[i])
		{
		case '0':
			ans += "000";
			break;

		case '1':
			ans += "001";
			break;

		case '2':
			ans += "010";
			break;

		case '3':
			ans += "011";
			break;

		case '4':
			ans += "100";
			break;

		case '5':
			ans += "101";
			break;

		case '6':
			ans += "110";
			break;

		case '7':
			ans += "111";
			break;
		}
	}

	cout << ans;
}