#include <iostream>
#include <string>
#include <stack>

#define MAX 1000001
#define CHAR 26

using namespace std;

stack<double> s;

char ary[CHAR];
string str = "";


int main() 
{
	cin >> str;

	for (int i = 0; i < CHAR; i++)
	{
		ary[i] = i + 97;
	}

	for (int i = 0; i < CHAR; i++)
	{
		if (str.find(ary[i]) == std::string::npos) {
			std::cout << "-1 ";
		}
		else {
			std::cout << str.find(ary[i]) << " ";
		}
	}
}
