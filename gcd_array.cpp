#include <iostream>
using namespace std;

// function of find the gcd of two number 
int gcd(int a,int b) {
    if(b == 0) {
        return a;
    }
    
    return gcd(b,a%b);
}
// function of find gcd of array
int gcd_array(int *a,int n) {
    int result = a[0];
    
    for(int i = 1;i < n;i++) {
        result = gcd(a[i],result);
        
        if(result == 1) {
            return 1;
        }
    }
    
    return result;
}
int main() {
    // array
    int a[] = {2,4,6,8,10};
    
    int n = sizeof(a) / sizeof(a[0]);
    
    cout << gcd_array(a,n);
    
    return 0;
}
