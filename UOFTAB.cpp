#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
llt findlcm(llt arr[], llt n)
{
    llt ans = arr[0];
 for (llt i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));

    return ans;
}
int main() {
    llt t,z,m,n,i,j,s,z1;
    cin>>t;
    for(z=0;z<t;z++)
    {
        cin>>x;
        llt a[x][3],b[x];
        for(i=0;i<x;i++)
        {
            cin>>a[i][0]>>a[i][1]>>a[i][2];
            b[i]=a[i][0]+a[i][1];
            a[i][2]%=b[i];}

        llt z1=findlcm(b,x);
        vector <llt> v;
        v.push_back()
        /*
    vector<pair <llt,llt> > p;
    vector<pair <llt,llt> > q;
    llt c=0;b=0;
    for(i=0;i<t;i++)
    {
        cin>>a;
        if(a>=0){
            p.push_back(make_pair(i,a));b++;}
        else
        {
            a=-1*a;
            c++;
            q.push_back(make_pair(i,a));
    }}
//    for(i=0;i<b;i++)
//        cout<<p[i].first<<" "<<p[i].second<<endl;
//    cout<<"/////";
//    for(i=0;i<c;i++)
//        cout<<q[i].first<<" "<<q[i].second<<endl;
//    cout<<"///////";
    llt j=0,x,ans=0;i=0;
    while(1)
    {
        if(i==b-1&&j==c-1)
            break;
        if(p[i].second==0&&i<b)
            i++;
        if(q[j].second==0&&j<c)
            j++;
        x=q[j].second;
        if(x>p[i].second)
        {
            q[j].second=x-p[i].second;
            ans+=(p[i].second)*abs(p[i].first-q[j].first);
            p[i].second=0;
        }
        if(x<=p[i].second)
        {
            q[j].second=0;
            p[i].second=p[i].second-x;
            ans+=(x)*abs(p[i].first-q[j].first);
        }
    }
*/
