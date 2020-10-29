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

    ll k,n,c = 0;
    string s;
    set<char>SET;
    cin>>s>>k;

    n = s.length();
    for(ll i=0; i<n; i++){
        SET.insert(s[i]);
    }
    c = SET.size();

    if(c >= k){
        cout<<0<<endl;
    }
    else if(n >= k){
        cout<<abs(c - k)<<endl;
    }
    else{
        cout<<"impossible"<<endl;
    }

    return 0;
}

