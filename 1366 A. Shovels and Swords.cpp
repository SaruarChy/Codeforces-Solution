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
    ll a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a > b){
            swap(a,b);
        }
        if(a*2 <= b){
            cout<<a<<endl;
        }
        else{
            cout<<(a+b)/3<<endl;
        }
    }

    return 0;
}
