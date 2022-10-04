#include<iostream>
#include<string>
#include<vector>
#include<stack>
#include<list>

using namespace std;

int main()
{
	vector<char> ans;
	stack<char> reverse;

	string str; //초기 문자열을 입력받는다
	getline(cin,str);
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] == '<') //tag 처리
		{
			if (!reverse.empty())
			{
				while (!reverse.empty())
				{
					ans.push_back(reverse.top());
					reverse.pop();
				}
			}

			do
			{
				ans.push_back(str[i++]);
			} while (!(str[i] == '>'));
			ans.push_back(str[i]);
		}
		else if (str[i] != ' ')
		{
			reverse.push(str[i]);
		}
		else
		{
			while (!reverse.empty())
			{
				ans.push_back(reverse.top());
				reverse.pop();
			}
			ans.push_back(str[i]);
		}
	}

	while (!reverse.empty())
	{
		ans.push_back(reverse.top());
		reverse.pop();
	}

	

	for (auto lit = ans.begin(); lit != ans.end(); lit++)
		cout << *lit;
}
