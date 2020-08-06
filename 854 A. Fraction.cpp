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
    int n,a,b;
    cin>>n;
    if(n == 3){
        cout<<1<<" "<<2<<endl;
        return 0;
    }
    a = (n / 2) - 1;
    b = (n / 2) + 1;
    if(n % 2 == 1){
        a++;
    }
    int div = __gcd(a, b);
    if(div != 1){
        a--;
        b++;
    }
    cout<<a<<" "<<b<<endl;

    return 0;
}
