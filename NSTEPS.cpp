#include <bits/stdc++.h>
using namespace std;
#define llt long long
llt GCD(llt A, llt B) {
    if(B==0)
        return A;
    else
        return GCD(B, A % B);
}
int main() {
    long t,x,y,z,i,j,k;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>x>>y;
        if(x!=0&&x!=1)
        {
            if(y==x){if(x%2==0)
                cout<<x+y<<endl;
                else
                    cout<<x+y-1<<endl;
                }
            else if(x==y+2){if(x%2==0)
                cout<<x+y<<endl;else
                cout<<x+y-1<<endl;}
            else
                cout<<"No Number\n";
        }
        else
        {
            if(x==y)
            {
                if(x==1)
                    cout<<1<<endl;
                else
                    cout<<0<<endl;
            }
            else
                cout<<"No Number\n";
        }
    }
    return 0;
}
