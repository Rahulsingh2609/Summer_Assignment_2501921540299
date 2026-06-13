#include<iostream>
using namespace std;
int main()
{
    int n,a,c=0;
    cout << "Enter the no : ";
    cin >> n;
    a=n;
    while(n!=0)
    {
        n=n/10;
        c++;
    }
    cout << "The no of digits in "<< a << " is : "<< c << endl;
    return 0;
}
