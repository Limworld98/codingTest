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

int main(int argc, char* argv[]) {
    int n;
    cin >> n;

    stack<int> st; //int type의 stack 선언. 
    string str;

    for (int i = 0; i < n; i++) {
        cin >> str;

        if (str == "push") { //push 명령어 일때. 

            int num;
            cin >> num;
            st.push(num);

        }
        else if (str == "pop") {    //pop 명령어 일때. 

            if (!st.empty()) {
                cout << st.top() << endl;
                st.pop();
            }
            else {
                cout << "-1" << endl;
            }

        }
        else if (str == "size") {        //size 명령어 일때. 

            cout << st.size() << endl;

        }
        else if (str == "empty") {    //empty 명령어 일때. 

            if (st.empty()) {
                cout << "1" << endl;
            }
            else {
                cout << "0" << endl;
            }

        }
        else if (str == "top") {        //top 명령어 일때. 

            if (!st.empty()) {
                cout << st.top() << endl;
            }
            else {
                cout << "-1" << endl;
            }

        }

    }
}


