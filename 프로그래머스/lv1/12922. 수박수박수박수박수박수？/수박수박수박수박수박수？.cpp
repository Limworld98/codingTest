#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    bool flag = true;

    for (int i = 0; i < n; i++) {
        if (flag) {
            answer += "수";
            flag = false;
        }
        else {
            answer += "박";
            flag = true;
        }
    }
    

    return answer;
}