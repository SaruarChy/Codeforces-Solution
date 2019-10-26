#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
        cin>>a[i];
    int flag=0;
    for(int j=0; j<n; j++)
    {
        float k=(double)a[j]/2;
        if((a[j]%2)!=0)
        {
            if(flag==0)
            {
                a[j]=ceil(k);
                flag=1;
            }
            else if(flag==1)
            {
                a[j]=floor(k);
                flag=0;
            }
        }
        else
            a[j]=a[j]/2;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
