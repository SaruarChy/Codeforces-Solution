#include<bits/stdc++.h>
using namespace std;
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
long long int x,y;
long double X,Y;
int main()
{
    fastread();
    cin>>x>>y;
    X=y*log(x);
    Y=x*log(y);

//    cout<<X<<" "<<Y<<"\n";
    if(X==Y){
        cout<<"=\n";
    }
    else if(X>Y){
        cout<<">\n";
    }
    else if(X<Y){
        cout<<"<\n";
    }

    return 0;
}
/*
SIMPLE INPUT
5 8
*/
