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
    int n;
    ll a,coin = 0,odd = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a % 2 == 1){
            odd++;
        }
    }
    coin = min(odd,n-odd);
    cout<<coin<<endl;


    return 0;
}
