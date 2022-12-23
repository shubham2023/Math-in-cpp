#include <iostream>
using namespace std;
int gcd(int a,int b) {
    return b == 0 ? a : gcd(b,a%b);
}

int lcm(int a,int b) {
    // a * b = lcm(a,b) * gcd(a,b)
    // lcm(a,b) = (a * b)/gcd(a,b)
    
    return (a * b)/gcd(a,b);
}
int main() {
    int a = 24;
    int b = 36;
    
    cout << gcd(a,b) << endl;
    cout << lcm(a,b);
    
    return 0;
}
