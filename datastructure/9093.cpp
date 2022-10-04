#include <iostream>
#include <utility>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <stack>
#include <queue>
#include <string>

#define MY_PI 3.14159265358979323846

using namespace std;

int main() {
    stack<char> mys;
    string s;
    int n;
    cin >> n;
    cin.ignore();
    for(int k = 0 ; k < n; k++)
    {
        getline(cin, s);
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ' || s[i] == '\n')
            {
                while (!mys.empty())
                {
                    cout << mys.top();
                    mys.pop();
                }
                cout << " ";
            }
            else
                mys.push(s[i]);
        }

        while (!mys.empty())
        {
            cout << mys.top();
            mys.pop();
        }

        cout << endl;
    }
}
