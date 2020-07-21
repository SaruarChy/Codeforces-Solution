//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    int n,a[1001],b[1001],ans = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b,b+n,greater<int>());
    for(int i=0; i<n; i++){
        if(i == 0){
            ans++;
        }
        else{
            ans += b[i] * i + 1;
        }
    }
    cout<<ans<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(b[i] == a[j]){
                a[j] = 0;
                cout<<j+1<<" ";
                break;
            }
        }
    }cout<<endl;

    return 0;
}
