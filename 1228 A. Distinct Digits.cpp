#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r,c,i;
    cin>>l>>r;
    for(i=l; i<=r; i++)
    {
        string b=to_string(i);
        c=0;
        for(int j=0; j<b.length(); j++){
            for(int k=j+1; k<b.length(); k++)
            {
                if(b[j]==b[k])
                {
                    c=1;
                    b.clear();
                    break;
                }
            }
        }
        if(c==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    if(c==1)
    {
        cout<<"-1"<<endl;
    }
    return 0;
}
