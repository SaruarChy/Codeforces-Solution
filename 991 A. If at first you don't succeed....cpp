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
    int a,b,c,n,sum = 0, ans = 0;
    cin>>a>>b>>c>>n;
    sum += a - c;
    sum += b - c;
    sum += c;
    ans = n - sum;
    if(ans <= 0 || (a<c) || (b < c)){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }

    return 0;
}

