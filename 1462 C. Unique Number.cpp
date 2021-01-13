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
    ll t,n;
    cin>>t;
    while(t--){
        string s;
        ll x = 9,sum = 0;
        set<int>S;
        cin>>n;
        if(n < 10){
            cout<<n<<endl;
            continue;
        }

        while(x > 0){
            if(n - sum >= x){
                sum += x;
                s += (x + '0');
                S.insert(x);
            }
            x--;
        }

        if(s.length() != S.size() || sum != n){
            cout<<-1<<endl;
        }
        else{
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }

    }
    return 0;
}

