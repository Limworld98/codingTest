#include <iostream>

int fac(int n) {
    if (n != 0) {
        return n*fac(n-1);
    }
    else
    return 1;
}

int main() {
    int k;
    std::cin >> k;
    std::cout << fac(k);
}