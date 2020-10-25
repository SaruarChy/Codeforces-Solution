#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int x = 0,y = 1;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(x == j || y == j){
                    cout<<1<<" ";
                }
                else{
                    cout<<0<<" ";
                }
            }cout<<endl;
            x++,y++;
            if(x == n)x = 0;
            if(y == n)y = 0;
        }
    }

    return 0;
}

