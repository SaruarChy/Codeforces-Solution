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
    string a,b,c;
    cin>>n;

    set<string>s;
    while(n--){
        cin>>a>>b;
        c = b+a;
        s.insert(c);
    }
    cout<<s.size()<<endl;

    return 0;
}
