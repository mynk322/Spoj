#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,b,n,n1,j;
    while(" ")
    {cin>>t;
    if(t==-1)
        return 0;
    llt a[t],s=0;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
    llt div=s/t;
    if(s%t==0)
    {llt s1=0;
    for(i=0;i<t;i++)
    {
        s1+=abs(div-a[i]);
    }
    cout<<s1/2<<endl;
    }
    else
        cout<<-1<<endl;
    }
    return 0;
}
