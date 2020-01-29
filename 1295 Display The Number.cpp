#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string str=" ";
        cin>>n;
        while(n>=4)
            str+="1",n-=2;
        if(n==3)
            str+="7",n-=3;
        else if(n==2)
            str+="1",n-=2;
        reverse(str.begin(),str.end());

        cout<<str<<endl;
    }
    return 0;
}
