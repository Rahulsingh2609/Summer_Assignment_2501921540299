#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,a,b,r=0;
    double rev=0.0;
    cout<<"Enter the Binary no : ";
    cin>>n;
    a=n;
    while(a!=0)
    {
        rev+=((a%10)*pow(2,r));
        a=a/10;
        r++;
    }
    cout<<"Decimal number of "<<n<<" is "<<rev;
    return 0;
}