#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    while(priorities.size() != 0 ) {
        int now = priorities[0];
        bool flag = true;
           
            for(int i = 0 ; i < priorities.size(); i++) {   
                if(priorities[i] > now) {
                    flag = false;
                    break;
                }
            }
            
        if(location == 0) { // 원하는 원소일경우
            cout << "원하는 원소 , ";
            if(flag) {
                cout << "끝내기" << endl;
                answer++;
                return answer; // 그대로 종료
            }
            else {             
                cout << "뒤로보내기 : " << priorities[0];
                priorities.push_back(priorities[0]); 
                priorities.erase(priorities.begin()); //맨 뒤로 보내기
                location = priorities.size()-1;
                cout << " location : " << location << endl;
            }
        }
        else { //원하는 원소가 아닐경우
            cout << "원하지 않는 원소 , ";
            if(flag) {
                cout << "큐에서 빼기 : " ;
                cout << priorities[0] << endl;
                answer++;
                
            }
            else {
                cout << "뒤로 보내기 : " << priorities[0];
                priorities.push_back(priorities[0]);
                cout << " location : " << location << endl;
            }
                priorities.erase(priorities.begin()); //큐에서 빼기
                location--;
        }
            
    }
    
    return answer;
}