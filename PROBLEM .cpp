#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,n,i,j,s;
    cin>>t;
    llt a[t],b[t];
    for(z=0;z<t;z++)
    {
        cin>>n;
        s=0,j=0;
    while(n>0)
    {
        j=n%10;
        if(j==6||j==9||j==0)
            s++;
        if(j==8)
            s+=2;
        n/=10;
    }
    cout<<s<<endl;
    }
    return 0;
}
