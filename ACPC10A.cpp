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
    llt n,c,a,b;
    while(1)
    {
        cin>>n>>a>>b;
        if(n==0&&b==0&&a==0)
            return 0;
        else
        {
            if(a-n==b-a)
                cout<<"AP "<<b+b-a<<endl;
            else
                cout<<"GP "<<(llt)(b*b/a)<<endl;
        }
    return 0;
}
