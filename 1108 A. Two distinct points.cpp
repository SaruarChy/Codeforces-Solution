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
    int t;
    ll L,R,l,r;
    cin>>t;
    while(t--){
        cin>>L>>R>>l>>r;
        if(R == r){
            cout<<R-1<<" "<<r<<endl;
        }
        else{
            cout<<R<<" "<<r<<endl;
        }

    }

    return 0;
}

