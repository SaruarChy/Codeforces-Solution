#include<bits/stdc++.h>
using namespace std;
#define fastread() (ios_base:: sync_with_stdio(false),cin.tie(NULL));

long long int t,n,a[100001];
int main()
{
    fastread();
    cin>>t;
    while(t--)
    {
        long int c=0;
        cin>>n;

        for(long int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a,a+n);
        for(long int i=0; i<n; i++){
            if(a[i]!=a[i+1])
                c++;
        }
        cout<<c<<endl;
    }
}
