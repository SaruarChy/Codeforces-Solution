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
    int t,n;
    ll a[100];
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(i%2 == 0){
                a[i] = abs(a[i]);
            }
            else{
                a[i] = abs(a[i]) * -1;
            }
        }
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

