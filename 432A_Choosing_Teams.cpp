#include<iostream>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    int arr[n];
    int x;
    int ans = 0;
    for(int i = 0;i<n;i++)
    {
       cin>>x;
       arr[i]=x;
       if(x+k <= 5)
       {
            ans++;
       } 
    }
    cout<<ans/3<<endl;
    return 0;
}