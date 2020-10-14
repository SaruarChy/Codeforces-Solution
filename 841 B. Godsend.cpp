#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll n,a;
    cin>>n;
    ll odd = 0,even = 0;
    for(ll i=0; i<n; i++){
        cin>>a;
        if(a & 1){
            odd++;
        }
        else{
            even++;
        }
    }
    if(odd > 0){
        cout<<"First"<<endl;
    }
    else{
        cout<<"Second"<<endl;
    }

    return 0;
}

