#include<iostream>
using namespace std;
int main()
{
    int n,d=1,min;
    cout<<"Enter the number : ";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            d=i;
        }
        min=0;
    }
    if(d>min)
    cout<<d<<" is the largest prime factor of "<<n<<endl;
    return 0;
}