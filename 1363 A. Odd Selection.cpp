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
    int t,n,x,a;
    cin>>t;
    while(t--)
    {
        int even = 0,odd = 0;
        cin>>n>>x;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a % 2 == 1)odd++;
            else even++;
        }
        int m = min(even,x-1);
        int d = x - m;

        if(d % 2 == 0){
            d++;
        }
        if(odd >= d && d <= x)cout<<"Yes\n";
        else cout<<"No\n";
    }
}
