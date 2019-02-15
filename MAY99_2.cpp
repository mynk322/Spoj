#include <bits/stdc++.h>
using namespace std;
int main() {
    long t,z,i;
    cin>>t;
    for(z=0;z<t;z++)
    {
        long long int a,j,s=0;
        cin>>a;
        int zz[100];
        while(a)
        {
            j=a%5;
            zz[s++]=j;
            if(j==0)
                a=(a/5)-1;
                else
            a=a/5;
        }
        for(i=s-1;i>=0;i--)
        {
            if(zz[i]==0)
                    cout<<'u';
            if(zz[i]==1)
                    cout<<'m';
            if(zz[i]==2)
                    cout<<'a';
            if(zz[i]==3)
                    cout<<'n';
            if(zz[i]==4)
                    cout<<'k';
        }
        cout<<endl;
    }
    return 0;
}
