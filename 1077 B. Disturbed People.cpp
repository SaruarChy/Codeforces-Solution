//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,a[101];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int k = 0;
    for(int i=1; i<n-1; i++){
        if( (a[i] == 0 && (a[i-1] == 1 && a[i+1] == 1)) ){
            k++;
            i += 2;
        }
    }
    cout<<k<<endl;

    return 0;
}
