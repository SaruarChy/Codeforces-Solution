#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int i,j,c=0;
    string x;
    cin>>x;
    int len=x.length();

    for(i=0, j=len-1; i<j; i++, j--)
        c+=x[i]!=x[j];

    if(c==1 || (c==0 && len%2==1))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
