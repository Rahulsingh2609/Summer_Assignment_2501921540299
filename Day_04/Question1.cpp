#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,n;
    cout << "Enter the no till you want to generate fibonacci series : ";
    cin >> n;
    cout << "fibonacci series : ";
    for(int i=1;i<=n;i++)
    {
        cout << a << "  ";
        int c=a+b;
        a=b;
        b=c;
    }
    return 0;
}