
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int s,n;
    cin>>s>>n;
    bool win = true;
    
    int d,p;
    

    vector<pair<int,int>>m;
    for(int i = 0; i<n; i++)
    {
        cin>>d>>p;
        m.push_back({d,p});
    }

    sort(m.begin(),m.end());

    for(auto x : m)
    {
        if(s > x.first)
        {
            s += x.second;
        }
        else
        {
            win = false;
            break;
        }
    }

    if(win)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    return 0;
}