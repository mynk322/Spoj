
#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,a,b,n,n1,j;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>n;
        llt s=0;
        for(i=0;i<n;i++)
        {
            cin>>a;
            s+=a;
        }
        if(s%n==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
