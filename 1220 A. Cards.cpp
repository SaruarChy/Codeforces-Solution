#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    string s;
    cin>>n;
    int one[n];
    int zero[n];
    memset(one,-1,sizeof(one));
    memset(zero,-1,sizeof(zero));

    cin>>s;
    for(i=0; i<n; i++)
    {
        if(s[i]=='n')
        {
            one[i]=1;
        }
        if(s[i]=='z')
        {
            zero[i]=0;
        }
    }
    for(i=0; i<n; i++)
    {
        if(one[i]==1)
        cout<<one[i]<<" ";
    }
    for(i=0; i<n; i++)
    {
        if(zero[i]==0)
        cout<<zero[i]<<" ";
    }
    return 0;
}
