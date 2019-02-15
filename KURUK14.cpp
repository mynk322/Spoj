#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,a,b,n,n1,j;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>n;
        llt a[n],b[n];
        llt s=0;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
            b[i]=-1;
        }
        llt x,y,po=-1;
        for(i=0;i<n;i++)
        {
            if(a[i]>=n||a[i]<=0)
            {
                cout<<"NO"<<endl;
                po=0;
                break;
            }
            x=a[i];
            y=n-a[i]-1;
            if(b[x]!=x&&b[x]!=y)
                {b[x]=x;}
            else if(b[y]!=x&&b[y]!=y)
                {b[y]=x;}
                else
                {
                    cout<<"NO"<<endl;
                    po=0;
                    break;
                }
        }

        if(po!=0)
            cout<<"YES"<<endl;
    }
    return 0;
}
