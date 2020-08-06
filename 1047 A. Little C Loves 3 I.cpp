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
    ll n,a,b,c;
    cin>>n;
    if( (n - 2) % 3 == 0){
        a = 1,b = 2,c = (n - 3);
    }
    else{
        a = 1,b = 1,c = (n - 2);
    }
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
