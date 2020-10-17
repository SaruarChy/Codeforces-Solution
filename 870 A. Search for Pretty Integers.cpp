#include<bits/stdc++.h>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;
int main()
{
    fastread();
    int n,m;
    int a[15],b[15];
    cin>>n>>m;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<m; i++){
        cin>>b[i];
    }
    sort(a,a+n);
    sort(b,b+m);
    int a_min = a[0];
    int b_min = b[0];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i] == b[j]){
                cout<<a[i]<<endl;
                return 0;
            }
        }
    }
    cout<<min(a_min,b_min)<<max(a_min,b_min)<<endl;

    return 0;
}

