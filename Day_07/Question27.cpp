#include<iostream>
using namespace std;
int sum(int n)
{
    if(n>0)
    return sum(n/10)+n%10;
    else
    return 0;
}
int main()
{
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    cout<<"The sum of digits of "<<n<<" is : "<<sum(n)<<endl;
    return 0;
}