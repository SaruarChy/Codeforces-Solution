#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    freopen("input.txt","r", stdin);
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n <= 3){
            cout<<n-1<<endl;
        }
        else if(n & 1){
            cout<<3<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }

    return 0;
}

