// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
unsigned long long catlan(unsigned int n) {
    if(n <= 0) {
        return 1;
    }
    
    int res = 0;
    
    for(int i = 0;i < n;i++) {
        res += catlan(i) * catlan(n - i - 1);
    }
    
    return res;
    
}
int main() {
    for(int i = 0;i <=10;i++) {
        cout << catlan(i) << " ";
    }
    return 0;
}
