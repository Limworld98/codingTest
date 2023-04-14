#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int dp[100001];
    dp[0] = 0;
    dp[1] = 1;
    int answer = 0;
    for(int i = 2; i < 100001; i++) {
        dp[i] = dp[i-1]+ dp[i-2];
        dp[i] = dp[i] % 1234567;
    }
    
    
    return dp[n];
}