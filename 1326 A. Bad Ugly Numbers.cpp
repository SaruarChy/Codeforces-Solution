#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)
            cout<<-1<<endl;
        else{
            cout<<5;
            for(int i=1; i<n; i++)
                cout<<7;
            cout<<endl;
        }
    }
    return 0;
}
