#include<iostream>
using namespace std;
int main()
{
    int n,a,r=0;
    cout << "Enter the no : ";
    cin >> n;
    a=n;
    while(n!=0)
    {
        r=r*10+n%10;
        n=n/10;
    }
    if(a==r)
    cout << a << " is a palindrome number." << endl;
    else
    cout << a << " is not a palindrome number." << endl;
    return 0;
}