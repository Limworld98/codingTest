#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

bool isPrime(int n) {
    
    if (n== 1 || n == 0)
        return false;
    
    for(int i = 2; i <= sqrt(n) ; i++) 
        if (n % i == 0)
            return false;
    
    return true;
    
}

int solution(string numbers) {
    int answer = 0;
    sort(numbers.begin(),numbers.end());
    vector<int> nums;
    
    do {
        for(int i = 0 ; i < numbers.size() ; i++) {
            nums.push_back(stoi(numbers.substr(0,i+1)));  
           // cout << nums.back() << " ";
        }
        
    } while(next_permutation(numbers.begin(),numbers.end()));
    
    //cout << endl;
    
    sort(nums.begin(),nums.end());
    
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    
    for(int i = 0;  i< nums.size(); i++)
        if(isPrime(nums[i])) {
            cout << nums[i] << " ";
            answer++;
        }
    return answer;
}