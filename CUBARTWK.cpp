#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,b,n,m,n1,j;
    while(" ")
    {cin>>n>>m;
    if(n==0&&m==0)
        return 0;
    llt a[n],b[m];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    llt s=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
    }llt po=0;
    for(i=0;i<m;)
    {

        if(po>n-1)
        {
         s+=b[i];
         i++;
         continue;
        }
        if(b[i]>a[po])
            po++;
        if(b[i]<a[po])
        {s+=b[i];i++;}
        if(b[i]==a[po])
        {
            po++;i++;
        }
    }
    cout<<s<<endl;
    }
    return 0;
}
