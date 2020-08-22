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
        if(n < k){
            cout<<k-n<<endl;
        }
        else{
            cout<<( (n - k) % 2 )<<endl;
        }

    }

    return 0;
}
