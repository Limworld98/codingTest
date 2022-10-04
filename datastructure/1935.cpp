#include <iostream>
#include <string>
#include <stack>

#define MAX 1000001
#define CHAR 26

using namespace std;

stack<double> s;

string str = "";


int main() 
{
	int n,cnt=0;
	int ar[CHAR]; // 문자의 개수 확인용 배열
	int valueAry[CHAR]; // 문자에 대치되는 값 저장 배열
	cin >> n;
	cin >> str;

	for (int i = 0; i < str.length(); i++) // 문자의 개수 확인
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			ar[str[i] - 'A'] = 1;
		}
	}

	for (int i = 0; i < CHAR; i++)
	{
		if (ar[i] == 1)
			cnt++;
	}
	//-------------------------------------------

	for (int i = 0; i < cnt; i++) //문자별 값 입력받기
	{
		cin >> valueAry[i];
	}

	for (int i = 0; i < str.length(); i++) // 식의 문자를 값으로 대체 후 연산
	{
		double temp;
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			temp = double(valueAry[str[i] - 'A']);
			s.push(temp);
		}
		else
		{
			if (str[i] == '+')
			{
				double temp2 = s.top();
				s.pop();
				double temp1 = s.top();
				s.pop();
				s.push(temp1 + temp2);
			}
			else if (str[i] == '-')
			{
				double temp2 = s.top();
				s.pop();
				double temp1 = s.top();
				s.pop();
				s.push(temp1 - temp2);
			}
			else if (str[i] == '*')
			{
				double temp2 = s.top();
				s.pop();
				double temp1 = s.top();
				s.pop();
				s.push(temp1 * temp2);
			}
			else if (str[i] == '/')
			{
				double temp2 = s.top();
				s.pop();
				double temp1 = s.top();
				s.pop();
				s.push(temp1 / temp2);
			}
		}
	}
	std::cout << fixed;
	std::cout.precision(2);
	std::cout << s.top();
}
