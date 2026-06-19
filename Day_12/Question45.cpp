#include<iostream>
using namespace std;
int palindrome(int n)
{
    int a=n,r=0;
    while(n!=0)
    {
        r=10*r+(n%10);
        n=n/10;
    }
    if(r==a)
    return 1;
    else
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the num : ";
    cin>>n;
    if(palindrome(n)==1)
    cout<<"Palindorme";
    else
    cout<<"Not palindrome";
}