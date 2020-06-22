//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n;
    ll a[100001];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n);
    ll sum = 0;
    int c = 0;
    for(int i=0; i<n; i++){
        if(sum <= a[i]){
            c++;
            sum += a[i];
        }
    }

    cout<<c<<endl;

    return 0;
}
