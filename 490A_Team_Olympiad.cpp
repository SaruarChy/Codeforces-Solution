#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    int i = 0;
    int j = 0;
    int k = 0;

    for(int l = 0; l<n; l++)
    {
        if(arr[l] == 1)
        {
            i++;
        }
        else if(arr[l] == 2)
        {
            j++;
        }
        else
        {
            k++;
        }
    }
    int ans = 0;
    int m = min(i,j);
    ans = min(m,k);

    std::cout<<ans<<endl;
    int x;
    bool res = true;
    for(int l = 0; l<ans; l++)
    {
        res = true;
        x = 0;
        while(res == true)
        {
            if(arr[x]==1)
            {
                std::cout<<x+1<<" ";
                arr[x] = INT_MAX;
                res = false;
            }
            x++;
        }
        x= 0;
        res= true;
        while(res == true)
        {
            if(arr[x]==2)
            {
                std::cout<<x+1<<" ";
                arr[x] = INT_MAX;
                res = false;
            }
            x++;
        }
        x = 0;
        res = true;
        while(res == true)
        {
            if(arr[x]==3)
            {
                std::cout<<x+1<<" ";
                arr[x] = INT_MAX;
                res = false;
            }
            x++;
        }
        std::cout<<endl;
    }
    return 0;
}