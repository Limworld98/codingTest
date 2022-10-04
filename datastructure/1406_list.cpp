#include<iostream>
#include<string.h>
#include<vector>
#include<list>

using namespace std;

int main()
{
	list<char> li;
	list<char>::iterator lit, cur;

	int n;
	char c;
	string str = ""; //초기 문자열을 입력받는다
	cin >> str;

	for (int i = 0; i < str.length(); i++) //list에 한글자씩 node로 만든다
		li.push_back(str[i]);

	cur = li.end(); //커서를 리스트의 오른쪽 끝에 둔다.

	cin >> n; // 명령어의 개수를 입력받는다

	while (n-- > 0)
	{
		cin >> c;
		if (c == 'L') // 커서를 왼쪽으로 이동
		{
			if (!li.empty())
			{
				if (cur != li.begin()) //맨 앞일경우 무시
					cur--;
			}
		}
		else if (c == 'D') // 커서를 오른쪽으로 이동
		{
			if (!li.empty())
			{
				if (cur != li.end()) //맨 뒤일경우 무시
					cur++;
			}
		}
		else if (c == 'B') // 커서 왼쪽의 문자 삭제
		{
			if (!li.empty())
			{
				if (cur != li.begin())
				{
					cur--;
					cur = li.erase(cur);
				}
			}
		}
		else if (c == 'P') // 커서 왼쪽에 문자 추가
		{
			char x;
			cin >> x;

			li.insert(cur, x);			
			}

		}


	}

	for (lit = li.begin(); lit != li.end(); lit++)
		cout << *lit;
}
//
