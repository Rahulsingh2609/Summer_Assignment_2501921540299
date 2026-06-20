#include<iostream>
using namespace std;
void reverse(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Reversed Array : ";
    for(int i=n-1;i>0;i--)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the number of elements in array : ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements in array : ";
    reverse(a,n);
}