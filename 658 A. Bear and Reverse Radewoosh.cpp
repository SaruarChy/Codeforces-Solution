#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,times1=0,times2=0;
    int score[1010],time[1010];
    cin>>n>>c;

    for(int i=0; i<n; i++)
        cin>>score[i];
    for(int i=0; i<n; i++)
        cin>>time[i];

    int limak=0,radoewoosh=0;
    //to find Limak's scores
    for(int i=0; i<n; i++){
        times1+=time[i];
        limak+=max(0,score[i]-c*times1);
    }
    //to find Radewoosh's scores
    sort(score,score+n, greater<int>());
    sort(time,time+n, greater<int>());
    for(int i=0; i<n; i++){
        times2+=time[i];
        radoewoosh+=max(0,score[i]-c*times2);
    }
//    cout<<limak<<endl;
//    cout<<radoewoosh<<endl;
    if(limak>radoewoosh){
        cout<<"Limak\n";
    }
    else if(limak<radoewoosh){
        cout<<"Radewoosh\n";
    }
    else if(limak==radoewoosh){
        cout<<"Tie\n";
    }

    return 0;
}
