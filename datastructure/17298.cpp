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

stack<int> mys;
vector<int> ans;

int main() 
{
	int n,index = 0; 
	cin >> n;
	
	int a[MAX];
	int ans[MAX];

	for (int i = 0; i < n; i++)
		cin >> a[i];
	//------------------

	for (int i = n-1; i >= 0; i--)
	{
		while (!mys.empty() && mys.top() <= a[i]) // 스택이 비거나 스택의 top이 a[i]보다 클경우까지 pop한다 -> 스택의 top에 a[i] 보다 큰 수를 남긴다.
			mys.pop();
		
		if (mys.empty())
			ans[i] = -1;
		else
			ans[i] = mys.top();
		mys.push(a[i]);

	}

	for (int i = 0; i < n; i++)
		cout << ans[i] << " ";


}


//
