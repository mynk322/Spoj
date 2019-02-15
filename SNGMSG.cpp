
#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,i,j;
    cin>>t;
    for(z=0;z<t;z++)
    {string n,s;
        cin>>n>>s;
        for(i=0;i<s.length();i++)
        {
            llt l=i/n.length(),b=0;
            llt a=(int)(s.at(i))-(int)('a');
            if(l%2==0){
            b=(int)(n.at(i%n.length()))-(int)('0');
            }
            else{
            b=(int)(n.at(n.length()-1-(i%n.length())))-(int)('0');
            }
            if(a-b<0)
                cout<<(char)((26-b+a)+(int)('a'));
            else
                cout<<(char)((a-b)+(int)('a'));
        }
        cout<<"\n";
    }
    return 0;
}
