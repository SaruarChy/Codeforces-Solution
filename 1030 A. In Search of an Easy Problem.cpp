#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tag=0;
// all comments are bug
//    string s;
    cin>>n;
    int s[105];
//    cin>>s;
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        tag+=s[i];
//        if(s[i]==1)
//        {
//            tag=1;
//            break;
//        }
    }
//    if(tag==1)
    if(tag>0)
        cout<<"HARD";
    else
        cout<<"EASY";
    cout<<endl;

    return 0;
}
