//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n,a[50001];
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=1; i<=n; i++){
            cin>>a[i];
        }
        ll idx1 = 0,idx2 = 0,idx3 = 0,sum = 0,flag = 0;
        sum = a[1]+a[2];
        idx1 = 1,idx2 = 2;
        for(ll i=3; i<=n; i++){
            if(a[i] >= sum){
                idx3 = i;
                flag = 1;
                break;
            }
        }
        if(flag == 1){
            cout<<idx1<<" "<<idx2<<" "<<idx3<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
