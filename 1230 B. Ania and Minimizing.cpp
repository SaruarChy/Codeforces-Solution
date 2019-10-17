#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,j;
    cin>>n>>k;
    char arr[n+5];
    cin>>arr;
    if(k==0)
    {
        cout<<arr;
        return 0;
    }
    if(n==1 && k>=1)
    {
        cout<<"0";
        return 0;
    }
    if(arr[0]!='1')
    {
        j=1;
        arr[0]='1';
    }
    else
        j=0;
    for(i=1; i<n && j<k; i++)
    {
        if(arr[i]=='0')
            continue;
        else
        {
            arr[i]='0';
            j++;
        }
    }
    cout<<arr<<endl;
    return 0;
}
