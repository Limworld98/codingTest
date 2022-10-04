#include <iostream>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <list>
#include <vector>

#define MY_PI 3.14159265358979323846
#define MAX 1000001
using namespace std;

stack<char> cal;

vector<int> ans;

int main()
{
	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			cout << str[i];
		}
		else
		{
			if (str[i] == '(')
			{
				cal.push(str[i]);
			}
			//-------------------------------------------
			else if (str[i] == '*' || str[i] == '/')
			{
				while (!cal.empty() && (cal.top() == '*' || cal.top() == '/'))
				{
					cout << cal.top();
					cal.pop();
				}
				cal.push(str[i]);
			}
			//--------------------------------------------
			else if (str[i] == '+' || str[i] == '-')
			{
				while (!cal.empty() && cal.top() != '(')
				{
					cout << cal.top();
					cal.pop();
				}
				cal.push(str[i]);
			}
			//---------------------------------------------
			else if (str[i] == ')')
			{
				while (!cal.empty() && cal.top() != '(')
				{
					cout << cal.top();
					cal.pop();
				}
				cal.pop();
			}
		}
	}

	while (!cal.empty())
	{
		cout << cal.top();
		cal.pop();
	}
}



