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
    cin>>t;
    while(t--){
        cin>>n;
        int a[101];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=n-1; i>=0; i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
