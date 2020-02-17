#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,tag=0;
    string s;
    cin>>n;
    string str[n+10];

    for(i=0; i<n; i++){
        cin>>s;
        //bug run time error on test 6
        //if(s[i]=='O' && s[i+1]=='O' && tag==0){
        if(s[0]=='O' && s[1]=='O' && tag==0){
            s[0]='+';
            s[1]='+';
            tag=1;
            str[i]=s;
        }
        else if(s[3]=='O' && s[4]=='O' && tag==0){
            s[3]='+';
            s[4]='+';
            tag=1;
            str[i]=s;
        }
        else
            str[i]=s;
    }

    if(tag==1){
        cout<<"YES"<<endl;
        for(i=0; i<n; i++)
            cout<<str[i]<<endl;
    }
    else
        cout<<"NO"<<endl;

    return 0;
}
