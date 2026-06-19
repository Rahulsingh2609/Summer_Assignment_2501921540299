#include<iostream>
using namespace std;
void arr(int a[], int n)
{
    int c=0,d=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        c++;
        else
        d++;
    }
    cout<<"Even numbers : "<<c<<endl;
    cout<<"Odd numbers : "<<d;
}
int main()
{
    int n;
    cout<<"Enter the no of elements in array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the element : ";
    arr(a,n);
}