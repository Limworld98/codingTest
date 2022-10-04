#include <iostream>

int main() {
    
    int num;
    int front,back;
    int count = 0;
    int original;
    int sum;
    int tempsum=-1;
    
    std::cin >> num;
    
    original = num;
    
    while(1) {
    
    if (num < 10) {
        num *= 10;
        
        tempsum = num+num/10;
    }
    
    else { 
    front = (num - (num%10)) / 10;
    back = num%10;
    sum = front + back;
    
    if(sum < 10) 
    tempsum = back*10 + sum;
    else {
    tempsum = (back*10) + (sum%10);
    }
    
    }
    
    count++;
    
    if(original == tempsum) {
       break;
    }
    else
    num = tempsum;
    
    }
    std::cout << count;
    
}
