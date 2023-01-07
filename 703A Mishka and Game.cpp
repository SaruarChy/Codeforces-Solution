#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int m,c;
    int wM=0;
    int wC=0;
    int draw=0;

    for(int i=0; i<n; i++)
    {
        cin>>m>>c;

        if(m>c)
            wM++;
        else if(m<c)
            wC++;
        else if(m==c)
            draw++;
    }
    if(draw==n || wM==wC )
    {
        cout<<"Friendship is magic!^^"<<endl;
    }
    else if(wM>wC)
    {
        cout<<"Mishka"<<endl;
    }
    else
    {
        cout<<"Chris"<<endl;
    }

    return 0;
}