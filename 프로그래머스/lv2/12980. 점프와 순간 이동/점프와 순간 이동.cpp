#include <iostream>

using namespace std;

// n = 가야할 거리
// x2만큼 순간이동 혹은 점프
// K만큼 점프 =  K만큼 건전지 사용
// 최소 건전지 사용량만큼 return



int solution(int n)
{
    int ans = 0;
    
    while(n > 0) {
        if(n%2 == 0)
            n /= 2;
        else {
            n = (n-1)/2;
            ans++;
        }
        
    }
    
    return ans;
}