#include<iostream>
#include<cmath>
using namespace std;
int armstrong(int n)
{
    int a,b,c=0;
    double d=0.0;
    a=b=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    while(a!=0)
    {
        d+=pow((a%10),c);
        a=a/10;
    }
    if(b==(int)d)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    if(armstrong(n)==1)
    cout<<"Armstrong Number";
    else
    cout<<"Not an Armstrong Number";
}