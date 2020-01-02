#include<iostream>
using namespace std;
int main()
{
    int n,a[5],solved=0;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        //cin>>a[0]>>a[1]>>a[2];
        //if(((a[0]==1) && (a[1]==1)) || ((a[1]==1) && (a[2]==1)) || ((a[2]==1) && (a[0]==1)) )
        if(a+b+c>=2)
            solved++;
    }
    cout<<solved<<endl;
    return 0;
}
