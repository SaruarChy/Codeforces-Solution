//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;
        if(a > b){
            swap(a,b);
        }
        cout<<max(a*2,b)*max(a*2,b)<<endl;
    }
    return 0;
}
