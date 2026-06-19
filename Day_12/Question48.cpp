#include<iostream>
using namespace std;
int perfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        sum+=i;
    }
    if(sum==n)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    if(perfect(n)==1)
    cout<<"Perfect Number";
    else
    cout<<"Not a Perfect Number";
}