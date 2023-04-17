#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unordered_map<int,int>m;
        for(int i = 0; i<n; i++)
        {
            int x;
            cin>>x;
            m[x]++;
        }

        int ans = -1;
        for(auto x : m)
        {
            if(x.second>2)
            {
                ans = x.first;
                break;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}