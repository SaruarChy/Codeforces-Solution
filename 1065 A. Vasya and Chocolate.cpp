//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int t;
    ll s,a,b,c;
    ull ans,can_buy,div;

    cin>>t;
    while(t--)
    {
        div = can_buy = ans = 0;
        cin>>s>>a>>b>>c;
        can_buy = s/c;
        div = can_buy/a;
        ans = (div*a) + (div*b);
        ans +=(can_buy%a);

        cout<<ans<<endl;
    }

    return 0;
}

