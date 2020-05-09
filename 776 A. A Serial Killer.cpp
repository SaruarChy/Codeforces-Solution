//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string f,l;
    int n;
    cin>>f>>l;
    cin>>n;
    cout<<f<<" "<<l<<endl;
    while(n--){
        string next,later;
        cin>>next>>later;
        if(f==next){
            f=later;
            cout<<f<<" "<<l<<endl;
        }
        else if(f==later){
            f=next;
            cout<<f<<" "<<l<<endl;
        }
        else if(l==next){
            l=later;
            cout<<f<<" "<<l<<endl;
        }
        else{
            l=next;
            cout<<f<<" "<<l<<endl;
        }
    }
    return 0;
}
