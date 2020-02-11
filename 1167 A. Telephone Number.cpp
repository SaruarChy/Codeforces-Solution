#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,tag;
    cin>>t;
    while(t--)
    {
        tag=0;
        string s;
        cin>>n>>s;
        for(int i=0; i<n; i++)
        {
            //WA on test 2 if(s[i]=='8')
            if(s[i]=='8' && n-i>=11)
            {
                tag=1;
                break;
            }
        }
        //cout<<tag<<endl;
        if(tag==1 && n>=11)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
