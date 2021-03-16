#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    //freopen("input.txt","r", stdin);
    ll n, m, un = 0,c = 0;
    string a,b;
    cin>>a>>b;
    n = a.length(), m = b.length();
    if(a == b){
        cout<<-1<<endl;
    }
    else{
        cout<<max(n,m)<<endl;
    }
    return 0;
}

