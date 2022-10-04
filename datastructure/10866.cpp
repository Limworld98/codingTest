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

using namespace std;

list<int> li;
vector<int> ans;


int main() 
{
	int n; 
	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;

		if (s == "push_front")
		{
			int x;
			cin >> x;
			li.push_front(x);
		}
		else if (s == "push_back")
		{
			int x;
			cin >> x;
			li.push_back(x);
		}
		else if (s == "pop_front")
		{
			if (!li.empty())
			{
				ans.push_back(li.front());
				li.pop_front();
			}
			else
				ans.push_back(-1);
		}
		else if (s == "pop_back")
		{
			if (!li.empty())
			{
				ans.push_back(li.back());
				li.pop_back();
			}
			else
				ans.push_back(-1);
		}
		else if (s == "size")
		{
			ans.push_back(li.size());
		}
		else if (s == "empty")
		{
			if (li.empty())
				ans.push_back(1);
			else
				ans.push_back(0);
		}
		else if (s == "front")
		{
			if (!li.empty())
				ans.push_back(li.front());
			else
				ans.push_back(-1);
		}
		else if (s == "back")
		{
			if (!li.empty())
				ans.push_back(li.back());
			else
				ans.push_back(-1);
		}

	}
	


	for (auto it = ans.begin(); it < ans.end(); it++)
		cout << *it << endl;
}

//
