#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int t,a,b,c,n,sum;
    cin>>t;
    while(t--)
    {
        sum=0;
        cin>>a>>b>>c>>n;
        sum+=a+b+c+n;
        if(sum%3!=0 || sum/3<a || sum/3<b || sum/3<c)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }

    return 0;
}
