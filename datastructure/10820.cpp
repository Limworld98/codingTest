#include <iostream>
#include <string>
#include <stack>

#define MAX 1000001
#define CHAR 26
#define MAXL 100

using namespace std;

string lines[MAXL];
int small_letter, capital_letter, number, blank;

int main() 
{
	int count = 0;
	string str = "sample";
	while (str != "")
	{
		getline(cin, str);
		
		if(str != "")
		lines[count++] = str;
	}

	for (int i = 0; i < count; i++)
	{
		for (int j = 0; j < lines[i].length(); j++)
		{
			if (lines[i][j] >= 'a' && lines[i][j] <= 'z')
				small_letter++;
			else if (lines[i][j] >= 'A' && lines[i][j] <= 'Z')
				capital_letter++;
			else if (lines[i][j] >= '0' && lines[i][j] <= '9')
				number++;
			else if (lines[i][j] == ' ')
				blank++;
		}
		cout << small_letter << " " << capital_letter << " " << number << " " << blank << endl;
		small_letter = 0;
		capital_letter = 0;
		number = 0;
		blank = 0;
	}
}
