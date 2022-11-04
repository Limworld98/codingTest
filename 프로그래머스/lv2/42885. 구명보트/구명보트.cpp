#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int leftIndex = 0;
    int rightIndex = people.size() - 1;

    sort(people.rbegin(), people.rend());

    while(leftIndex <= rightIndex) {
        if ((people[leftIndex] + people[rightIndex]) > limit)
            leftIndex++; //2명이 못탈경우, 무거운 사람만 태운다
        else {
            leftIndex++; //2명이 탈수 있을경우, 둘다 태운다
            rightIndex--;
        }

        answer++;

    }

    /*if (leftIndex >= rightIndex)
        answer++;*/

    return answer;
}
