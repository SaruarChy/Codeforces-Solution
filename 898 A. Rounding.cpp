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
    ll n;
    cin>>n;
    ll mod = n % 10;
    if(mod <= 5){
        n -= mod;
    }
    else{
        n += (10 - mod);
    }
    cout<<n<<endl;

    return 0;
}
