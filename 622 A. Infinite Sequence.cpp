#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    ll n,temp = 0,i = 1;
    cin>>n;
    n--;
    while(1){
        n -= i;
        i++;
        if(n < 0){
            break;
        }
        else{
            temp = n;
        }
    }
    cout<<temp+1<<endl;

    return 0;
}

