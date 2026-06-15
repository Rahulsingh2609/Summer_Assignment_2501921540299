#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cout << "Enter the number : ";
    cin >> n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        c=c+i;
    }
    if(c==n)
    cout << n << " is a perfect no " << endl;
    else
    cout << n << " is not a perfect no " << endl;
    return 0;
}