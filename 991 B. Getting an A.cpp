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
    int n,a[101];
    cin>>n;
    double sum = 0.0,div = 0.0;
    for(int i=0; i<n; i++){
        cin>>a[i];
        sum += a[i];
    }
    sort(a,a+n);
    div = sum / n;
    int ans = 0;
    while(div < 4.5){
        ans++;
        for(int i=0; i<n; i++){
            if(a[i] < 5){
                sum += (5- a[i]);
                a[i] = 5;
                break;
            }
        }
        div = sum/n;
    }
    cout<<ans<<endl;

    return 0;
}
