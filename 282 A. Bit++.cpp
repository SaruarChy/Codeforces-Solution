//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    while(n--)
    {
        string s;
        cin>>s;
        for(int i=0; i<s.length(); i++){
            if(s[i] == '+' && s[i+1] == '+'){
                c++;
            }
            else if(s[i] == '-' && s[i+1] == '-'){
                c--;
            }
        }
    }
    cout<<c<<"\n";

    return 0;
}
/*
SIMPLE INPUT
1
++X
*/
