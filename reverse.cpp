
#include <iostream>
#include <cmath>
using namespace std;
int reverse(int n) {
    unsigned long long r = 0;
    
    while(n != 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    
    return r;
}

int main() {
    int n = 12345;
    cout << reverse(n);
    return 0;
}
