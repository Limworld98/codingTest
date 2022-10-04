#include <iostream>
#include <string>
#include <stack>

#define MAX 1000001
#define CHAR 26
#define MAXL 100

using namespace std;

string a, b,c,d;
int main() 
{
	cin >> a >> b >> c >> d;
	cout << stol(a+=b) + stol(c+=d);
}
