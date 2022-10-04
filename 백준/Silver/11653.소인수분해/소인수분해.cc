#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
	int a;
	cin >> a;

	for (int i = 2; a > 1; )
	{
		if (a % i == 0) {
			cout << i << endl;
			a /= i;
		}
		else
			i++;
	}	
}