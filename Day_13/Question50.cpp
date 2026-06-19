#include<iostream>
using namespace std;
void arr(int a[], int n)
{
    int sum=0;
    double avg=0.0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
    }
    avg=(double)sum/n;
    cout<<"Sum of array : "<<sum<<endl;;
    cout<<"Average of array : "<<avg;
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