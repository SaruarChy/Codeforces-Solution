#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m,c;
    int winM=0,winC=0,draw=0;
    for(int i=0; i<n; i++)
    {
        cin>>m>>c;

        if(m>c)
            winM++;
        else if(m<c)
            winC++;
        else if(m==c)
            draw++;
    }
    if(draw==n || winM==winC /*bug || (winM+winC==n)*/)
        cout<<"Friendship is magic!^^";
    else if(winM>winC)
        cout<<"Mishka";
    else
        cout<<"Chris";

    cout<<endl;
    return 0;
}
