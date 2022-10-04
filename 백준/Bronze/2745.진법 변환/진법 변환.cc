#include <iostream>
#include <cmath>
#include <algorithm>
#include <string>
#include <stack>

using namespace std;

#define MAX_ARY 1000001
#define MAX 1000000
#define THIS_MAX 1000000000 //10억

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	//--------------------------------------

	stack<char> ans;

	string n;
	long long int b,deci=0;
	cin >> n >> b;

	for (int i = 0; i < n.length(); i++) 
	{
		if (n[n.length()-1-i] >= 'A' && n[n.length() - 1 - i] <= 'Z')
			deci += (((n[n.length() - 1 - i] - 'A')+10) * pow(b, i));
		else
			deci += ((n[n.length() - 1 - i] - '0') * pow(b, i));
	}

	cout << deci;

}