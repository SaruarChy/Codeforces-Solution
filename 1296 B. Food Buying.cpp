//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long int n,ans,div;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ans=n,div=0;
        if(n<10){
            cout<<n<<"\n";
            continue;
        }

        else{
            while(n>=10){
                div=n/10;
                n=n%10;
                n=n+div;
                ans+=div;
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
/*
SIMPLE INPUT
6
1
10
19
9876
12345
1000000000
*/
