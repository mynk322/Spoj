#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    long t,z,n,i;
    cin>>t;
    long long int s;
    for(z=0;z<t;z++)
    {
        cin>>n;
        vector <pair<llt,llt> > p;
        llt  a[n],b;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>b;
            p.push_back(make_pair(a[i],b));
        }
        sort(p.begin(),p.end());
        vector <llt> v(n);
        for(i=n-1;i>=0;i--)
        {
               //vector<llt> ::iterator vp =p.begin();
                v.insert(v.begin()+p[i].second,p[i].first);
        }
    for(i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
        }
        return 0;
}
