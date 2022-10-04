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

int main() 
{
    int n;
    stack<int> mys;
    queue<int> myq;
    bool flag = true;
    string s = "";
    cin >> n;
    while (n-- > 0)
    {
        flag = true;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {           
            if (s[i] == '(')
                mys.push(1);
            else if (s[i] == ')')
            {
                if (mys.empty())
                {
                    flag = false;
                    break;
                }    
                else
                    mys.pop();
            }
        }
        if (mys.empty() && flag == true)
            myq.push(1);
        else
        {
            while (!mys.empty())
                mys.pop();
            myq.push(0);
        }
    }
    while (!myq.empty())
    {
        if (myq.front())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        myq.pop();
    }
}


