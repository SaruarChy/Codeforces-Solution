#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d,c=0,i,j;
    cin>>n>>d;
    int a[n+5];
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(a[j]-a[i]>d)break;
            c++;
        }
    }
    cout<<c*2<<endl;
    return 0;
}
