#include<iostream>
using namespace std;
void arr(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
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