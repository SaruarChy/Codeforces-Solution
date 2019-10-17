#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int flag=0;
        int a[ ]={2,3,5,7,11};
        long long x,y,c,i;
        cin>>x>>y;
        c=x-y;
        for(i=0; i<5; i++)
        {
            if(c%a[i]==0)
                flag=;
            else
            {
                flag=1;
                continue;
            }
        }
        if(flag==0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
