#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;

    int ans = 0;
    int h = 0;

    if(n%2 == 1)
    {
        h = n/2;
        h++;
    }
    else
    {
        h = n/2;
    }

    for(int i = h; i<=n; i++)
    {
        if(i%m == 0)
        {
            ans = i;
            break;
        }
    }

    if(ans > 0)
    {
        cout<<ans<<endl;
    }
    else{
        cout<<"-1"<<endl;
    }
    return 0;
}