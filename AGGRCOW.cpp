#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int t,z,n,i,b=1,c=0,d;
   string s;
    cin>>s;
    for(i=0;i<s.length();i++)
    {
        if(i%2==1&&s.at(i)=='*')
        {
            c=1;
            b=b*5;
        }
        else if(i%2==0&&s.at(i)=='*')
        {
            c=1;
            b=b*21;
        }
    }
    if(c==0)
        cout<<1<<endl;
    else
        cout<<b;
    return 0;
}
