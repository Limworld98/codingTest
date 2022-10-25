#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    int pCount = 0;
    int yCount = 0;
    bool answer = true;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'p' || s[i] == 'P')
            pCount++;
        if (s[i] == 'y' || s[i] == 'Y')
            yCount++;
    }

    if (pCount != yCount)
        answer = false;

    return answer;
}