#include<iostream>
using namespace std;
int main()
{
    int x,n,r=1;
    cout<<"Enter the value of base : ";
    cin>>n;
    cout<<"Enter the value of power : ";
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        r=r*n;
    }
    cout<<"The result is : "<<r;   
    return 0;
}