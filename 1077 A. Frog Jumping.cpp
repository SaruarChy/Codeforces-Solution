#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int a,b,q,d;
    long long int ans;
    int t;
    cin>>t;
    while(t--)
    {
        ans=d=0;
        cin>>a>>b>>q;
        if(q%2==1){
            d=(q/2)+1;
        }else{
            d=q/2;
        }
        ans=(d*a)-((q-d)*b);
        cout<<ans<<"\n";
    }
    return 0;
}
/*
SIMPLE INPUT
6
5 2 3
100 1 4
1 10 5
1000000000 1 6
1 1 1000000000
1 1 999999999
*/
