#include<iostream>
#include<string.h>
#include<queue>
#include<vector>
#include<list>

using namespace std;

int main()
{
	int n, k;
	int count = 0;

	cin >> n >> k;

	list<int> li;
	list<int>::iterator lit;
	list<int>::iterator temp;

	vector<int> ans;
	vector<int>::iterator iter;

	for (int i = 0; i < n; i++)
	{
		li.push_back(i + 1);
	}

	lit = li.begin();

	while (!li.empty())
	{
		count++;
		if (count == k) //k번째마다 삭제
		{
			ans.push_back(*lit); //정답을 저장
			//노드 삭제, lit은 다음을 가르킨다.
			if (lit == --li.end())
			{
				li.erase(lit);
				lit = li.begin();
				count = 0;
			}
			else
			{
				lit++;
				temp = lit;
				lit--;
				li.erase(lit);
				lit = temp;
				count = 0;
			}
		}
		else
		{
			if (lit == --li.end())
				lit = li.begin();
			else
				lit++;
		}
	}

	//---------결과 출력
	cout << "<";
	for (iter = ans.begin(); iter != ans.end(); iter++) {
		cout << *iter;
		if (iter != ans.end() - 1)
			cout << ", ";

	}
	cout << ">" << endl;


}

//
