#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        if(k*k > n){
            cout<<"NO"<<endl;
        }
        else if((n%2==1 && k%2==1) || (n%2==0 && k%2==0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
