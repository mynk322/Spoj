#include <bits/stdc++.h>
using namespace std;
int main() {
    long t,z;
    cin>>t;
    for(z=0;z<t;z++)
    {long long int a,b,c=0,d=0,j;
   cin>>a>>b;
   while(a>0)
   {
       j=a%10;
       c=c*10+j;
       a=a/10;
   }
   while(b>0)
   {
       j=b%10;
       d=d*10+j;
       b=b/10;
   }
   c=c+d;
   d=0;
   while(c>0)
   {
       j=c%10;
       d=d*10+j;
       c=c/10;
   }
   cout<<d<<endl;
    }
    return 0;
}

