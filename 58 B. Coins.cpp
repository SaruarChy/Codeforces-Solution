#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,b;
    cin>>n;
    b=n;
    for(i=n; i>=1; i--)
    {
        if(b%i==0)
        {
            b=i;
            cout<<i<<" ";
        }
    }
    return 0;
}
