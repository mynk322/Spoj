
#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,a,b,n;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>a>>b;
        int x[a],s=0,cc;
        for(i=0;i<a;i++)
        {
            cin>>x[i];
            if(x[i]!=0)
                cc=i+1;
            s=s+x[i];
        }
        int xx=b%s;
        if(xx==0)
        {cout<<cc<<endl;
        continue;}
        for(i=0;i<a;i++)
        {
            xx-=x[i];
            if(xx<=0){
                cout<<i+1<<endl;break;
        }
        }
    }
    return 0;
}
