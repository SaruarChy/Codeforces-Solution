#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,f,s,k,x,y;
    cin>>t;
    while(t--)
    {
        x=y=0;
        cin>>n>>f>>s;
        for(int i=0; i<f; i++)
        {
            cin>>k;
            x=max(x,k);
        }
        for(int i=0; i<s; i++)
        {
            cin>>k;
            y=max(y,k);
        }
        if(x>y)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
