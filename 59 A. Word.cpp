#include<bits/stdc++.h>
using namespace std;
int main()
{
    int lenX,i,upcase=0,lowcase=0;
    int findA=0,finda=0;
    string x;
    cin>>x;
    lenX=x.length();
    for(i=0; i<lenX; i++)
    {
        if(x[i]>='a' && x[i]<='z')
            lowcase++;
        else
            upcase++;
    }
    findA=lenX-lowcase;
    finda=lenX-upcase;
    if((findA==finda) || (finda >=findA))
        transform(x.begin(), x.end(), x.begin(), :: tolower);
    else
        transform(x.begin(), x.end(), x.begin(), :: toupper);
    cout<<x<<endl;
    return 0;
}
