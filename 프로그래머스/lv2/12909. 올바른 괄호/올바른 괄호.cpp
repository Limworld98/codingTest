#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

stack<int> myS;

bool solution(string s)
{
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(')
            myS.push(1);
        else {
            if (myS.size() == 0)
                return false;
            else
                myS.pop();
        }
    }

    if (myS.size() != 0)
        return false;

    return true;
}