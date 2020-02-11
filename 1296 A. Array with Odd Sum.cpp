#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    int odd,even;
    int a[10000];
    while(t--)
    {
        odd=even=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]%2==0)
                even++;
            else
                odd++;
        }
        if (odd & 1 or (odd > 0 and even > 0))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
