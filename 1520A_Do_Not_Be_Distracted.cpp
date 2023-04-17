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

        string s;
        cin>>s;
        bool ans = true;

        unordered_map<char,int>m;
        for(int i = 0; i<n; i++)
        {
            if(m.find(s[i]) == m.end())
            {
                m[s[i]] = i;
            }
            else
            {
                if(m[s[i]] < i-1)
                {
                    ans = false;
                    break;
                }
                else
                {
                    m[s[i]] = i;
                }
            }
        }
        if(ans == true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}