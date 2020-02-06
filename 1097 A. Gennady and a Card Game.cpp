#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=5,tag=0;
    while(n--)
    {
        string t;
        cin>>t;
//bug        if(s[0]=='A' && t[0]=='A')
        if(s[0]==t[0])
            tag=1;
        else if(s[1]==t[1])
            tag=1;
    }
    if(tag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
