//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,a1,b,b1;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>a1>>b1;
        if(a > b)swap(a,b);
        if(a1 > b1)swap(a1,b1);

        if(a+a1 == b && a+a1 == b1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
