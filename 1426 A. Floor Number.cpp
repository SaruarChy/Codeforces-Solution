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
    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int c = 2,ans = 1;
        while(c < n){
            c += x;
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}

