//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        if(n == 1 ){
            cout<<0<<endl;
            continue;
        }
        if(n == 2){
            cout<<m<<endl;
            continue;
        }
        if(n>2){
            cout<<m*2<<endl;
        }
    }
    return 0;
}
