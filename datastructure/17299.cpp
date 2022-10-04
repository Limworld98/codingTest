#include <iostream>
#include <string>
#include <stack>

#define MAX 1000001

using namespace std;

stack<int> s;
int ary[MAX];
int temp[MAX];
int ans[MAX];

int main() 
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> ary[i];
	}

	for (int i = 0; i < n; i++)
	{
		temp[ary[i]]++;
	}

	for (int i = n-1; i >= 0; i--)
	{
		//스택이 비거나 stack의 top에있는 원소의 개수가 비교 원소의 개수보다 클경우 stop(stack top에 개수가 큰 원소가 있을때까지) 
		while (!s.empty() && temp[s.top()] <= temp[ary[i]]) 
			s.pop();
		

		if (s.empty())
			ans[i] = -1;
		else
			ans[i] = s.top();

		s.push(ary[i]);
	}

	for (int i = 0; i < n-1; i++)
		cout << ans[i] << " ";
	cout << ans[n-1];
}
