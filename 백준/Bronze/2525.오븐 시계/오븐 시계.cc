#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cmath>
#include <algorithm>

using namespace std;

#define SOL 1000001
#define MOD 1000000009

long long int solution[SOL];

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//---------------------------------------------

	int hour, minute,require;
	cin >> hour >> minute;
	cin >> require;

	if (minute + require < 60)
		cout << hour << " " << minute + require;
	else
	{
		int temp;
		temp = (minute + require)/ 60;
		minute = (minute + require) % 60;

		if (hour + temp < 24)
			cout << hour + temp << " " << minute;
		else
			cout << hour + temp - 24 << " " << minute;
	}
}