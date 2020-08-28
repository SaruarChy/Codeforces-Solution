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
    int n,m;
    cin>>n>>m;
    int sub = 0,ans = 0;
    sub = n - m;
    if(m == 0){
        ans = 1;
    }
    else if(n == m){
        ans = 0;
    }
    else{
        ans = min(sub,m);
    }
    cout<<ans<<endl;

    return 0;
}
