#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = 0;
    string temp = A;
    while (temp != B) {
        if (answer > A.size()) {
            answer = -1;
            break;
        }

        temp = temp[temp.size() - 1] + temp.substr(0, temp.size()-1);
        answer++;
    }
    return answer;
}