#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,m,n,i,j,s,a1,b1,a2,b2,a3,b3;
    cin>>m>>n>>t;
    llt a[t],b[t];
    for(z=0;z<t;z++)
    {
        i=0;j=0;
        cin>>a1>>b1>>a2>>b2>>a3>>b3;
    if((a1<min(a2+abs(b2-b1),a3+abs(b3-b1))))
    {
        cout<<"YES"<<endl;
    }
    else if((b1<min(b2+abs(a2-a1),b3+abs(a3-a1))))
    {
        cout<<"YES"<<endl;
    }
    else if(((m-b1)<min(m-b2+abs(a2-a1),m-b3+abs(a3-a1))))
    {
        cout<<"YES"<<endl;
    }
    else if(((m-a1)<min(m-a2+abs(b2-b1),m-a3+abs(b3-b1))))
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    }
    return 0;
}
