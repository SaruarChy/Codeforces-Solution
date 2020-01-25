#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    int a[5];
    cin>>t;
    while(t--)
    {
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        int ans= 2*(a[2]-a[0]-2);
        cout<<max(0,ans)<<endl;
    }
    return 0;
}
