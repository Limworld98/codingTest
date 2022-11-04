#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int tempSum;
    int count;
    for (int i = 1; i <= n; i++) {
        tempSum = 0;
        count = i;
        while (tempSum < n) {
            tempSum += count;
            count++;
        }
        if (tempSum == n)
            answer++;

    }

    return answer;
}