#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout<<"Enter the no : ";
    cin>>n;
    while(n!=0)
    {
        if(n%2==1)
        c++;
        n=n/2;
    }
    cout<<"The no of set bits is : "<<c<<endl;
    return 0;
}