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
    ll prod = pow(2,n);
    ll mod = m % prod;
    cout<<mod<<endl;

    return 0;
}

