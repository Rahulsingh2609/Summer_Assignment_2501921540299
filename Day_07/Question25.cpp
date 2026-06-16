#include<iostream>
using namespace std;
long factorial(int n)
{
    if(n==0)
    return 1;
    else
    return n*factorial(n-1);
}
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n>0)
    cout<<"The factorial of "<<n<<" is : "<<factorial(n);
    else
    cout<<"Factorial is not defined for negative numbers.";
    return 0;
}