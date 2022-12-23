#include <iostream>
using namespace std;
int gcd(int a,int b) {
    return b == 0 ? a : gcd(b,a%b);
}
int main() {
    int a = 24;
    int b = 36;
    
    cout << gcd(a,b) << endl;
    
    return 0;
}
