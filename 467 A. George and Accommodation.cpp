#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,people,capacity,c=0;
    cin>>t;
    while(t--)
    {
        cin>>people>>capacity;
        if(capacity-people>=2)
            c++;
    }
    cout<<c<<endl;
    return 0;
}
