#include<iostream>
using namespace std;
int main()
{
    int i,j,len,len2,tag=0;
    string x,y;
    cin>>x>>y;
    len=x.length();
    len2=y.length();
    for(i=0, j=len2-1; i<len, j>=0; i++, j--)
        //for(j=len2-1; j>=0; j--)
        {
            if(x[i]==y[j])
                tag=1;
            else
            {
                tag=0;
                break;
            }
        }
    if(tag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
