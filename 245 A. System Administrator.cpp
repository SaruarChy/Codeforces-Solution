#include<bits/stdc++.h>
using namespace std;
int loss[3] , live[3];
int n , x , a , b;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>x>>a>>b;
        live[x]+=a;
        loss[x]+=b;
    }
    for(int j=1;j<=2;j++)
        if(live[j] < loss[j])
            cout<<"DEAD"<<endl;
        else
            cout<<"LIVE"<<endl;
    return 0;
}
