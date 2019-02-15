#include <bits/stdc++.h>
using namespace std;
#define llt long long int
int main() {
    llt t,z,m,n,i,j,z1;
    string s;
    while(!cin.eof())
    {
        cin>>s;
            llt c=0,d=0,e=0;
            for(i=0;i<s.length();i++)
            {
                if((int)(s.at(i))>64&&(int)(s.at(i))<=90)
                    d=1;
                if(s.at(i)=='_')
                    c=1;
 
            }
            if(c==1&&d==1)
                {cout<<"Error!"<<endl;continue;}
            else if(c==1)
            {
            for(i=0;i<s.length()-1;i++)
            {
                if(s.at(i)=='_')
                 {
                    cout<<(char)((int)(s.at(i+1)-32));
                    i++;
                 }
                else
                    cout<<s.at(i);
            }
            if(s.at(s.length()-1)!='_')
                cout<<s.at(s.length()-1)<<endl;
            else
                cout<<endl;
            }
            else if(d==1)
            {
            for(i=0;i<s.length()-1;i++)
            {
                if((int)(s.at(i))>64&&(int)(s.at(i))<=90)
                     {
                    cout<<"_"<<(char)((int)(s.at(i)+32));
                 }
                else
                    cout<<s.at(i);
            }
                if((int)(s.at(s.length()-1))>64&&(int)(s.at(s.length()-1))<=90)
                {
                    cout<<"_"<<(char)((int)(s.at(s.length()-1)+32))<<endl;
                 }else
                cout<<s.at(s.length()-1)<<endl;
            }
            else
            {
                cout<<s<<endl;
            }
    }
    return 0;
}