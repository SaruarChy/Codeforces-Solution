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
    int t,n;
    cin>>t;
    while(t--){
        int ans = 0;
        cin>>n;
        ans = n/2;
        if(n % 2 == 1)ans++;

        cout<<ans<<endl;

    }

    return 0;
}
