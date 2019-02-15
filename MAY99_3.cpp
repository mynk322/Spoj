#include <bits/stdc++.h>
using namespace std;
int main() {
    long t,z,n,i;
    cin>>t;
    long int n1,n2,n3,n4,n5;
    for(z=0;z<t;z++)
    {
        cin>>n1>>n2>>n3;
        if(n1>=n2)
        {
            n5=n1;
            n4=n2;
        }
        else
        {
            n5=n2;
            n4=n1;
        }
        if(n3<=n1+n2)
        {
            if(n3==n5-n4||n3==n1||n3==n2||n3==(n1+n2)||n3==n5+min(n4,(n5-n4))||n3%n4==0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
