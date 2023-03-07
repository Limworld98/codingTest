#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

stack<int> mys;

int solution(string s) // O(n) 이하의 시간복잡도 필요
{

	for (int i = 0; i < s.size(); i++) {
		if (mys.empty())
			mys.push(s[i]);
		else {
			if (mys.top() == s[i])
				mys.pop();
			else
				mys.push(s[i]);
		}
	}

	if (mys.empty())
		return 1;
	else
		return 0;
}