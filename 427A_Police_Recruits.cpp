#include<iostream>
using namespace std;

int main(){

    int police = 0;
    int ans = 0;

    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i = 0; i<n; i++)
    {
       if(arr[i] == -1)
       {
        if(police >= 1)
        {
            police--;
        }
        else
        {
            ans++;
        }
       }
       else
       {
        police += arr[i];
       }

    }

     cout<<ans<<endl;
    return 0;
}