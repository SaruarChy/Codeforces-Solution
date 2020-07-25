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
        string s,a,b;
        cin>>n>>s;
        for(int i=0; i<1; i++){
            a += s[i];
        }
        for(int i=1; i<n; i++){
            b += s[i];
        }
        if(a[0] >= b[0] && b.length() == 1){
            cout<<"NO\n";
        }
        else{
            cout<<"YES"<<endl<<2<<endl;
            cout<<a[0]<<" ";
            for(int i=0; i<b.length(); i++){
                cout<<b[i];
            }cout<<endl;
        }
    }

    return 0;
}
