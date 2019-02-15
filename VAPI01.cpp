#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,j;
    cin>>t;
    for(z=0;z<t;z++)
    {llt n;string s;
        cin>>n>>s;
        llt c=0;
        llt a[26]={0};
        for(i=0;i<s.length();i++)
        {
            if(i%2==0)
                a[(int)(s.at(i))-(int)('a')]+=1;
            else
            {
                if(a[(int)(s.at(i))-(int)('A')]==0)
                    c++;
                else
                    a[(int)(s.at(i))-(int)('A')]--;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}
