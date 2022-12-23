#include <iostream>
using namespace std;

int gcd(int a,int b) {
    if(b == 0) {
        return a;
    }
    
    return gcd(b,a%b);
}

int lcm_array(int *a,int n) {
    int ans = a[0];
    
    for(int i = 1;i < n; i++ ) {
        ans = (ans * a[i]) / gcd(ans,a[i]);
    }
    
    return ans;
}
int main() {
    int arr[] = {1,2,8,3};
    
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << lcm_array(arr,n);
    
    return 0;
}
