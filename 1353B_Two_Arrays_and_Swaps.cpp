#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,m;
        cin>>n;
        cin>>m;

        int a[n];
        int b[n];
        for(int i = 0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i = 0; i<n; i++)
        {
            cin>>b[i];
        }

        sort(a,a+n);
        sort(b,b+n);

        int i = 0;
        int j = n-1;
        while(b[j] > a[i] and m>0)
        {
            swap(b[j],a[i]);
            j--;
            i++;
            m--;
        }

        int ans = 0;
        for(int k = 0; k<n; k++)
        {
            ans += a[k];
        }

        cout<<ans<<endl;
    }
    return 0;
}