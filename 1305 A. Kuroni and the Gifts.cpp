#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int a[10000],b[10000],c[10000];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
            cin>>a[i];
        for(int i=0; i<n; i++)
            cin>>b[i];
        sort(a,a+n);
        //find bug after 2nd submission
        //sort(b,b+n,greater<int>());
        sort(b,b+n);
        for(int i=0; i<n; i++)
        {
            if(a[i]+b[i]==c[i-1])
            {
                swap(a[i],a[i+1]);
                c[i]=a[i]+b[i];
                //cout<<c[i]<<" ";
            }
            else
                c[i]=a[i]+b[i];
        }
        for(int i=0; i<n; i++)
            cout<<a[i]<<" ";
        cout<<endl;
        for(int i=0; i<n; i++)
            cout<<b[i]<<" ";
        cout<<endl;
    }
}
