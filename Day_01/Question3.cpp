#include<iostream>
using namespace std;
int main()
{
    int n;
    long fact=1;
    cout << "Enter the no : ";
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    cout << "The Factorial of " << n << " is : " << fact << endl;
    return 0;
}

