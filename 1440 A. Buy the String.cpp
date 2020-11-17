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

    ll t,n,c0,c1,h;
    cin>>t;
    while(t--){
        string s;
        cin>>n>>c0>>c1>>h>>s;

        ll one = 0,zero = 0;
        for(ll i=0; i<n; i++){
            if(s[i] == '0'){
                zero++;
            }
            else{
                one++;
            }
        }

        if(c0 == c1){
            cout<<n*c0<<endl;
        }
        else{
            ll coin0 = 0,coin1 = 0,coin3;
            coin0 = (one * h) + n * c0;
            coin1 = (zero * h) + n * c1;
            coin3 = (zero * c0) + (one * c1);

            cout<<min(coin0,min(coin1,coin3) )<<endl;
        }
    }

    return 0;
}

