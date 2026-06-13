#include<iostream>
using namespace std;
int main()
{
    int m,n,a,c=0;
    cout << "Enter the range for prime numbers (m to n): ";
    cin >> m >> n;
    for(int i=m;i<=n;i++)
    {
        a=i;
        c=0;
        for(int j=1;j<=a;j++)
        {
            if(a%j==0)
            c++;
        }
        if(c==2)
        cout << a << " is a prime number." << endl;
    }
    return 0;
}