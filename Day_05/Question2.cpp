#include<iostream>
using namespace std;
int main()
{
    int a,b,c=1,d=0,n;
    cout<<"Enter the no : ";
    cin>>n;
    a=n;
    while(n!=0)
    {
        c=1;
        b=n%10;
        for(int i=1;i<=b;i++)
        {
            c*=i;
        }
        d+=c;
        n=n/10;
    }
    if(a==d)
    cout<<a<<" is a strong number ";
    else
    cout<<a<<" is not a strong number ";
    return 0;
}