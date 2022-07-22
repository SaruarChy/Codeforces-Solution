//Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    int aa[100000];
    cin>>t;
    while(t--)
    {
        int d=0,rem=0;
        cin>>n;
        if(n >= 1000){
            rem=n%1000;
            aa[d++]=n-rem;
            n%=1000;
        }
        if(n >= 100){
            rem=n%100;
            aa[d++]=n-rem;
            n%=100;
        }
        if(n >= 10){
            rem=n%10;
            aa[d++]=n-rem;
            n%=10;
        }
        if(n<10 && n>0){
            aa[d++]=n;
        }
        vector<int>va;
        for(int i=0; i<d; i++){
            va.push_back(aa[i]);
        }
        cout<<va.size()<<endl;
        for(int i=0; i<va.size(); i++){
            cout<<va[i]<<" ";
        }
        cout<<endl;
    }
}


//Java
import java.util.Iterator;
import java.util.LinkedList;
import java.util.Scanner;

public class roundNum {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        LinkedList<Integer> list = new LinkedList<>();
        int n = input.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = input.nextInt();
        }
        int mod, x = 1, count = 0;
        for (int i = 0; i < arr.length; i++) {
            while (arr[i] > 0) {
                x = x * 10;
                mod = arr[i] % x;
                if (mod != 0) {
                    arr[i] = arr[i] - mod;
                    count++;
                    list.addFirst(mod);
                }
            }
            list.addFirst(count);
            Iterator itr = list.iterator();
            while (itr.hasNext()) {
                System.out.println(itr.next());
            }
            list.clear();
            count = 0;
            x = 1;
        }

    }

}
