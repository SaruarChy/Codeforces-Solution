#include<iostream>
using namespace std;
int main()
{
    int n,a[5],solved=0;
    cin>>n;
    while(n--)
    {
        cin>>a[0]>>a[1]>>a[2];
        if(((a[0]==1) && (a[1]==1)) || ((a[1]==1) && (a[2]==1)) || ((a[2]==1) && (a[0]==1)) )
            solved++;
    }
    cout<<solved<<endl;
    return 0;
}
