#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,n;
    cin>>t;
    string s,b;
    for(int j=0; j<t; j++)
    {
        cin>>s;
        n=s.size();
        int tag=0;
        for(i=0; i<n; i++)
        {
            if(s[i]==s[i+1] && s[i]!='?')
            {
                tag=1;
                break;
            }
            else if(s[i]=='?')
            {
                if(s[i-1]!='a' && s[i+1]!='a'){
                    s[i]='a';
                }
                else if(s[i-1]!='b' && s[i+1]!='b'){
                    s[i]='b';

                }
                else{
                    s[i]='c';

                }
            }
        }
        if(tag==1)
            cout<<-1;
        else
            for(i=0; i<n; i++)
                cout<<s[i];
        cout<<endl;
    }
}
