#include <iostream>
#include <cmath>
using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    
    while(1) {
        if(abs(a-b) == 1 && max(a,b) % 2 == 0)
            break;
        else 
            answer++;
        
        a = ceil(double(a)/2);
        b = ceil(double(b)/2);
        
    }
    
    return answer;
}