
#include <bits/stdc++.h>
using namespace std;
#define llt long long
llt GCD(llt A, llt B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
int main() {
    llt n,c;
    while(1)
    {
        cin>>n;
        if(n==0)
            return 0;
        else
            cout<<(llt)(n*(n+1)*(2*n+1)/6)<<endl;
    }
    return 0;
}
