#include<iostream>
using namespace std;
int main()
{
    int n,a,sum=0;
    cout << "Enter the no : ";
    cin >> n;
    a=n;
    while(n!=0)
    {
        sum=sum+n%10;
        n=n/10;
    }
    cout << "The sum of digits in "<< a << " is : "<< sum << endl;
    return 0;
}