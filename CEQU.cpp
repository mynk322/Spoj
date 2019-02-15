#include <bits/stdc++.h>
using namespace std;
#define llt long long int

llt GCD(llt A, llt B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}

int main() {
    llt t,z,i,a,b,n,n1;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>a>>b>>n;
        n1=GCD(a,b);
        if(n%n1==0)
            cout<<"Case "<<z+1<<": "<<"Yes"<<endl;
        else
            cout<<"Case "<<z+1<<": "<<"No"<<endl;
    }
    return 0;
}
