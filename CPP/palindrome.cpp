#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,n,reverse=0;
    cout<<"enter number to check palindrome"<<endl;
    cin>>n;
    int temp=n;
    while(n!=0)
     {   
        r=n%10;
         
         reverse=reverse*10+r;
        n=n/10;   
     }
     if(temp==reverse)
         {
             cout<<"The number is Palindrome"<<endl;
         } 
     else
        {
             cout<<"Number is not palindrome";
        }
                                        
    return 0;
}