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
        string s;
        cin>>n>>s;
        for(int i=0; i<2*n-1; i+=2){
            cout<<s[i];
        }
        cout<<endl;
    }

    return 0;
}
