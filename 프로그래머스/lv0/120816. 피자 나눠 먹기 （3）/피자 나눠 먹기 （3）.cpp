#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int slice, int n) {
    int answer = ceil(double(n)/slice);
    return answer;
}