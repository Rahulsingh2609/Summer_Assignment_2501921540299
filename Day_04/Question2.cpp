#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,n;
    cout << "Enter the nth term : ";
    cin >> n;
    if(n==1)
    cout << a;
    else if(n==2)
    cout << b;
    else
    for(int i=2;i<=n;i++)
    {
        int c =a+b;
        a=b;
        b=c;
    }
    cout << a;
    return 0;
}