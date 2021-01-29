#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    ll t;
    double n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        if(n <= k){
            cout<<ceil(k/n)<<endl;
        }
        else if(k < n){
            ll i=2;
            while(k < n){
                if(k*i >= n){
                    k *= i;
                    break;
                }
                else{
                    i++;
                }
            }
            //cout<<k<<endl;
            cout<<ceil(k/n)<<endl;
        }
    }
    return 0;
}
