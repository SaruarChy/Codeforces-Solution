#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,tag,lenP,lenH,i;
    cin>>t;
    while(t--)
    {
        string p,h;
        tag=0;
        cin>>p>>h;
        lenP=p.size();
        lenH=h.size();
        if(lenP>lenH)
        {
            cout<<"NO"<<endl;
            continue;
        }
        sort(p.begin(),p.end());
        for(i=0; i<=(lenH-lenP); i++)
        {
            string s=h.substr(i,lenP);
            sort(s.begin(),s.end());
            if(s==p)
            {
                tag=1;
                break;
            }
        }
        if(tag==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
