#include<iostream>
using namespace std;

int main(){
    
    int n;
    int m;
    cin>>n>>m;

    long long int arr[m];
    for(int i = 0; i<m;i++)
    {
        cin>>arr[i];
    }

    long long int ans = arr[0]-1;

    for(int i = 1; i<m; i++)
    {
        if(arr[i] >= arr[i-1])
        {
            ans += arr[i]-arr[i-1];
        }
        else
        {
            ans += n - arr[i-1];
            ans += arr[i];
        }
    }
    cout<<ans<<endl;
    return 0;
}