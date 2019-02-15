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
        llt a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];}
            sort(a,a+n);
            llt in=-1;s=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]!=a[i+1])
            {
                s=s+(i+1)*(i-in);
                in=i;
            }}
            s+=(n-1-in)*n;

        cout<<s<<endl;
    }
    return 0;
}
