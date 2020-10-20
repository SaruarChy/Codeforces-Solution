#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll t,n,a[55];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int pos1 = 0,pos2 = 0;
        for(int i=0; i<n; i++){
            if(a[i] == 1){
                pos1 = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(a[i] == 1){
                pos2 = i;
                break;
            }
        }
        int c = 0;
        for(int i=pos1; i<=pos2; i++){
            if(a[i] == 0){
                c++;
            }
        }
        cout<<c<<endl;
    }

    return 0;
}

