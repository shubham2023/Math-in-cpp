// Online C++ compiler to run C++ program online
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

int maxpal(int n) {
    int upper_limit = pow(10,n) - 1;
    int lower_limit = 1 + upper_limit / 10;
    unsigned long long mx = 0;
    for(int i = upper_limit;i >=lower_limit;i--) {
        for(int j = i;j >= lower_limit;j--) {
            unsigned long long product = i * j;
            if(product < mx) {
                break;
            }
            int r = reverse(product);
            
            if(r == product && r > mx) {
                mx = product;
            }
        }
    }
    
    return mx;
}
int main() {
    int n = 3;
    cout << maxpal(n);
    return 0;
}
