#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,f=0,s=1,num;
    cout<<"enter number of terms"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
     {
        cout<<f;
         num=f+s;
         f=s;
         s=num;
        

     }
    return 0;
}