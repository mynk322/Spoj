#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t,z,i,n,c,zz=1,s;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>n;
        c=1;
        while(1)
        {
            i=n;
            s=0;
            while(i)
            {
                s=s+i%10;
                i=i/10;
            }
            if(n%s==0)
            {c=0;
            zz=n;
            break;
            }
            n++;
        }
        cout<<zz<<endl;
        }
        return 0;
}
