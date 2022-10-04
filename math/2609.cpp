#include <iostream>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <string>
#include <list>
#include <vector>

#define MY_PI 3.14159265358979323846
#define MAX 1000001
using namespace std;

int main()
{
	int a, b,c,d,temp;
	cin >> a >> b;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	c = a;
	d = b;

	while (a % b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}
	cout << b << endl << c * d / b << endl;
}

