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
    n %= 4;
    if(n == 0 || n == 3){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }

    return 0;
}

