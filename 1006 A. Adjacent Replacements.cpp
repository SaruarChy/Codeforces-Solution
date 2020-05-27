//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n;
    ll a[1010];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] % 2 == 0){
            a[i] = a[i]-1;
        }
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    return 0;
}

