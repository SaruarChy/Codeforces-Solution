#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t,i,LastTime,Words,a;
    Words=LastTime=0;
    cin>>n>>t;

    for(i=0; i<n; i++)
    {
        cin>>a;
        if(a-LastTime>t)
            Words=0;
        Words++;
        LastTime=a;
    }
    cout<<Words<<endl;
    return 0;
}
