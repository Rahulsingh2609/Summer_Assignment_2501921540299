#include<iostream>
using namespace std;
int main()
{
    int n,a,p=1;
    cout << "Enter the no : ";
    cin >> n;
    a=n;
    while(n!=0)
    {
        p*=n%10;
        n=n/10;
    }
    cout << "The product of digits in "<< a << " is : "<< p << endl;
    return 0;
}