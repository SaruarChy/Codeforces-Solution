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
        cin>>n;
        if(n == 2){
            cout<<1<<endl;
            cout<<2<<endl;
            continue;
        }
        else{
            cout<<n<<endl;
            for(int i=1; i<=n; i++){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}

