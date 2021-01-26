#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,fact=1,n;
    cout<<"enter number to find its factorial"<<endl;
    cin>>n;
    for(i=1;i<=n;i++)
       {
           fact*=i;
       }
    cout<<"The factorial of "<<n<<" is "<<fact;
    return 0;
}
  