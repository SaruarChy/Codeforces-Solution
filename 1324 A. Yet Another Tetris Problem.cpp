#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,a[1000];
    cin>>t;
    while(t--)
    {
        int even=0,odd=0;
        cin>>n;

        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
                even=1;
            else
                odd=1;
        }
        if(even + odd ==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}
