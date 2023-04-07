#include <string>
#include <iostream>
#include <vector>

using namespace std;

//큐 형식의 벡터를 사용
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    
    while(progresses.size() != 0) { //전체 작업이 종료될때까지 반복
               //큐는 내부를 확인할 수 없으므로, 벡터로 내부를 확인및 연산        
        int daycount = 0;
        
        for(int i = 0; i < progresses.size(); i++) 
            progresses[i] += speeds[i]; //각 속도에 맞게 작업 진행
            
        while(progresses.size() !=0 && progresses[0] >= 100) { //앞선 작업이 100이 넘을경우 이후 100이넘는 작업까지 전부 완료
            progresses.erase(progresses.begin());
            speeds.erase(speeds.begin());
            daycount++;
        }
        
        if(daycount > 0)
        answer.push_back(daycount);
        
    }
    
    return answer;
}