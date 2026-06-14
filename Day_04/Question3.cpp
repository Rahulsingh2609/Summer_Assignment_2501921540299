#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b,c=0;
    double d=0.0;
    cout << "Enter the number : ";
    cin >> n;
    a=b=n;
    while(n!=0)
    {
        c++;
        n=n/10;
    }
    while(a!=0)
    {
        d+=pow(a%10,c);
        a=a/10;
    }
    if(b==(int)d)
    cout << b << " is an Armstrong no " <<endl;
    else
    cout << b << " is not an Armstrong no " <<endl;
    return 0;
}