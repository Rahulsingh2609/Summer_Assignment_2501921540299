#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int m,n,a,b,c=0;
    double d=0.0;
    cout << "Enter the range : ";
    cin >> m >> n;
    for(int i=m;i<=n;i++)
    {
        c=0,d=0.0;
        a=b=i;
        int t=i;
        while(t!=0)
        {
            t=t/10;
            c++;
        }
        while(a!=0)
        {
            d+=pow(a%10,c);
            a=a/10;
        }
        if(d==b)
        cout << b << " is an Armstrong no " <<endl;
    }
    return 0;
}