#include <iostream>
 
using namespace std;
 
int main()
{
   int n,a[3]={0};
   cin>>n;
   while(n--)
   {
       int x,y;
       cin>>x>>y;
       if(x>y) a[1]++;
       else if(y>x) a[2]++;
   }
   if(a[1]>a[2]) cout<<"Mishka";
   else if(a[2]>a[1]) cout<<"Chris";
   else cout<<"Friendship is magic!^^";
}