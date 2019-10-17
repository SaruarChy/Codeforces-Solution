#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int a=0,b=0,c=0,x,y,z;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;

    }
    if(a==0 && b==0 && c==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
