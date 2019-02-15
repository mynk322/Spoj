#include <bits/stdc++.h>
using namespace std;
#define vll  vector < pair<long,long> >
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main() {
    long t,z;
    cin>>t;

    for(z=0;z<t;z++)
    {long long int n,a,b,c=0,d=0,j;
   cin>>n;
   vll p;
   for(int i=0;i<n;i++)
   {
       cin>>a>>b;
       p.push_back(make_pair(a,b));
   }
    sort(p.begin(),p.end(),sortbysec);
    int cc=1;int x= p[0].second;
    for(int i=1;i<n;i++)
    {if(p[i].first>=x)
    {
        x=p[i].second;
        cc++;
    }
    }
    cout<<cc<<endl;
    }
    return 0;
}
