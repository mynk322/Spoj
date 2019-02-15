#include <bits/stdc++.h>//not done yet
using namespace std;
int main() {
    long long int t,z,n,i;
    cin>>t;
    long int n1,n2;
    for(z=0;z<t;z++)
    {
        cin>>n;
        int c=1;
        long long int zzz;
        for(i=0;i<n;i++)
        {
            cin>>zzz;
            if(zzz>i)
                c=0;
        }
        if(c==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}

