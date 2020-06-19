#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,target;
    cin>>s;

    target = "hello";
    int n = s.length();

    int k = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i] == target[k]){
            k++;
        }
    }
    if(k == target.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}
