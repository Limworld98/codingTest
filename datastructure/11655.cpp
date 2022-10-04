#include <iostream>
#include <string>
#include <stack>

#define MAX 1000001
#define CHAR 26
#define MAXL 100

using namespace std;

void ROT_small(char *alphabet)
{
	for (int i = 0; i < 13; i++)
	{
		if (*alphabet != 'z')
			(*alphabet)++;
		else if (*alphabet == 'z')
			*alphabet = 'a';
	}
}

void ROT_capital(char *alphabet)
{
	for (int i = 0; i < 13; i++)
	{
		if (*alphabet != 'Z')
			(*alphabet)++;
		else if (*alphabet == 'Z')
			*alphabet = 'A';
	}
}

int main() 
{
	string a;
	getline(cin, a);
	for (int i = 0; i < a.length(); i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
			ROT_small(&a[i]);
		else if (a[i] >= 'A' && a[i] <= 'Z')
			ROT_capital(&a[i]);
	}

	cout << a << endl;
}
