#include<iostream>
using namespace std;
int main()
{
    int t,n,a,sum=0,ans=0;
    int avg;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>a;
            sum+=a;
        }
        avg=sum/n;
        if((avg*n)>=sum)
            cout<<avg<<endl;
        else
        {
            avg+=1;
            cout<<avg<<endl;
        }
        sum=0;
    }
    return 0;
}
