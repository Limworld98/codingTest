#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    int width = 0;
    int height = 0;
    for (int i = 1; i <= yellow; i++) {
        if (yellow % i == 0) {
            if ((i + 2) * (yellow / i + 2) == sum) {
                width = i + 2;
                height = yellow / i + 2;
            }
        }
    }

    answer.push_back(width);
    answer.push_back(height);

    return answer;
}