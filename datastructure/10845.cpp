#include <iostream>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <string>

#define MY_PI 3.14159265358979323846

using namespace std;

queue<int> myq;

int main() 
{
	int n;
	cin >> n;
	while (n-- > 0)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			int x;
			cin >> x;
			myq.push(x);
			
		}
		else if (s == "pop")
		{
			if (!myq.empty())
			{
				cout << myq.front() << endl;
				myq.pop();
			}
			else
			{
				cout << "-1" << endl;
			}
		}
		else if (s == "size")
		{
			cout << myq.size() << endl;
		}
		else if (s == "empty")
		{
			cout << myq.empty() << endl;
		}
		else if (s == "front")
		{
			if (!myq.empty())
			{
				cout << myq.front() << endl;
			}
			else
			{
				cout << "-1" << endl;
			}
		}
		else if (s == "back")
		{
			if (!myq.empty())
			{
				cout << myq.back() << endl;
			}
			else
			{
				cout << "-1" << endl;
			}
		}
	}

}


