#include <string>
#include <iostream>

using namespace std;

int solution(string s)
{
	string temp = "";
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			switch (s[i])
			{
			case 'z':
				temp += '0';
				i += 3;
				break;
			case 'o':
				temp += '1';
				i += 2;
				break;
			case 't':
				if (s[i + 1] == 'w')
				{
					temp += '2';
					i += 2;
				}
				else
				{
					temp += '3';
					i += 4;
				}
				break;
			case 'f':
				if (s[i + 1] == 'o')
				{
					temp += '4';
					i += 3;
				}
				else
				{
					temp += '5';
					i += 3;
				}
				break;
			case 's':
				if (s[i + 1] == 'i')
				{
					temp += '6';
					i += 2;
				}
				else
				{
					temp += '7';
					i += 4;
				}
				break;
			case 'e':
				temp += '8';
				i += 4;
				break;
			case 'n':
				temp += '9';
				i += 3;
				break;
			}
		else
			temp += s[i];
	}

	int answer = stoi(temp);
	return answer;
}