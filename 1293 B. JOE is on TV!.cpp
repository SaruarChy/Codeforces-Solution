//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    double m = n;
    double ans = 0;
    for(int i=0; i<n; i++){
        ans += 1/m;
        m--;
    }
    cout<<fixed<<setprecision(12)<<ans<<endl;
}
