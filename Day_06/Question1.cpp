#include<iostream>
using namespace std;
int main()
{
    int n;
    string b=" ";
    cout<<"Enter the decimal no : ";
    cin>>n;
    cout<<"Binary number of "<<n<< " is ";
    if(n==0)
    cout<<"0";
    while(n!=0)
    {
        b=char((n%2)+'0')+b;
        n=n/2;
    }  
    cout<<b;
    return 0;
}