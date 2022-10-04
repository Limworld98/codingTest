#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <algorithm>
#define MAX 1000001
#define CHAR 26
#define MAXL 100

using namespace std;

string str;

int main()
{
	cin >> str;
	vector<string> ans;

	for (int i = 0; i < str.length(); i++)
		ans.push_back(str.substr(i, str.length()));


	sort(ans.begin(), ans.end());


	for (auto i = ans.begin(); i < ans.end(); i++)
		cout << *i << " ";
}
