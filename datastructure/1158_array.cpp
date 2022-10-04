#include<iostream>
#include<string.h>
#include<queue>
#include<vector>

using namespace std;

int main()
{
	int n, k;
	int cursor = 0, count = 1;
	vector<int> ans;
	vector<int>::iterator iter;

	cin >> n >> k;

	int* ary = new int[n];

	for (int i = 0; i < n; i++)
		ary[i] = i + 1;

	while (1) // 1cycle은 count를 따라간다
	{
		while (ary[cursor] == -1) // 커서가 가리키는 값이 -1일경우, 커서를 한칸 증가시킨다 (빈값을 무시한다.)
		{
			if (cursor == n-1)
				cursor = 0;
			else
				cursor++;
		}
		
		if (count == k) //k번째에 도착했을경우
		{
			ans.push_back(ary[cursor]);
			ary[cursor] = -1;
			count = 0;
		}

		if (cursor == n-1)
			cursor = 0;
		else
			cursor++;

		count++;
		
		if (ans.size() == n)
			break;

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


