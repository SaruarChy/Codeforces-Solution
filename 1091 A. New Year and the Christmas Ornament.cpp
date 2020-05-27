//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int y,b,r,Min = 0, ans = 0;
    cin>>y>>b>>r;
    if((y == b) && (b == r))
    {
        cout<<y*3-3<<endl;
        return 0;
    }
    Min = min(y,min(b,r));
    if(Min == y){
        if(r >= Min+2){
            ans = (Min * 3) + 3;
        }
        else{
            ans = (Min * 3) ;
        }
    }
    if(Min == b){
        if(r >= Min+1){
            ans = (Min * 3);
        }
        else{
            ans = (Min * 3) - 3;
        }
    }
    if(Min == r){
        ans = (Min * 3) - 3;
    }
    cout<<ans<<endl;

    return 0;
}

