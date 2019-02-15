#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t,z,n,i;
    cin>>t;
    long int n1,n2;
    for(z=0;z<t;z++)
    {
        cin>>n;
        z=n%6;
        if(z==0)
            cout<<0<<endl;
        if(z==1)
            cout<<1<<endl;
        if(z==2)
            cout<<4<<endl;
        if(z==3)
            cout<<6<<endl;
        if(z==4)
            cout<<5<<endl;
        if(z==5)
            cout<<2<<endl;
    }
    return 0;
}
