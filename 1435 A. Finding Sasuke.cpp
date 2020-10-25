#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n,a[101];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            if(i & 1){
                cout<<a[n-1-i]<<" ";
            }
            else{
                cout<<-a[n-1-i]<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}

