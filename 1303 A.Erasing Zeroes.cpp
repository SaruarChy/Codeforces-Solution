#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int c,pos,pos2,i;
    cin>>t;
    string s,a;
    while(t--)
    {
        c=0,pos=0,pos2=0;
        cin>>s;
        for(i=0; i<s.length(); i++)
        {
            if(s[i]=='1')
            {
                //a+='1';
                pos=i;
                break;
            }
        }
        for(i=s.length(); i>=pos; i--)
        {
            if(s[i]=='1')
            {
                pos2=i;
                break;
            }
        }
        for(i=pos; i<pos2; i++)
        {
            if(s[i]=='0')
                c++;
            else
                a+='1';
        }
        //cout<<a<<endl;
        cout<<c<<endl;
    }
}
