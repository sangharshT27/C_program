#include<iostream>
using namespace std;
int main()
{
    int n,f=1;
    
    cout<<"enter the number";
    cin>>n;
    while(1<=n)
    {
      f*=n;
      n--;
    
    }
     cout<<f;

    
}