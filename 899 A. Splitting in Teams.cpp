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
    ll n;
    int a[200001];
    cin>>n;
    ll one = 0,two = 0,ans = 0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] == 1)one++;
        else two++;
    }
//    cout<<one<<" "<<two<<endl;
    if(two > 0 && one >= two){
        ans += two;
        one -= two;
    }
    else if(two > one && one > 0){
        ans += one;
        one = 0;
    }
    if(one >= 3){
        ans += one/3;
    }
    cout<<ans<<endl;


    return 0;
}
