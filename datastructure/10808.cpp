#include <iostream>
#include <string>
#include <stack>

#define MAX 1000001
#define CHAR 26

using namespace std;

stack<double> s;

int ary[CHAR];
string str = "";


int main() 
{
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		ary[str[i] - 'a']++;
	}
	
	for (int i = 0; i < CHAR; i++)
	{
		cout << ary[i] << " ";
	}
}
