//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    cin>>t;

    ll x,y;
    while(t--)
    {
        cin>>x>>y;
        if(x == 1 && y > 1){
            cout<<"NO"<<endl;
        }
        else{
            if(x <= 3 && y > 3){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }

    }

    return 0;
}
