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
    int t;
    ll n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int ans = 0;
        if(n % 2 == 0){
            ans = n + (2*k);
        }
        else{
            for(int i=3; i<=n; i++){
                if(n % i == 0){
                    n +=i;
                    k--;
                    break;
                }
            }
            ans = n + (2*k);
        }
        cout<<ans<<endl;
    }

    return 0;
}

