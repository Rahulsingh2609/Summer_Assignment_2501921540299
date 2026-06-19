#include<iostream>
using namespace std;
void arr(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=a[0],min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        if(a[i]<min)
        min=a[i];
    }
    cout<<"Largest no : "<<max<<endl;
    cout<<"Smallest no : "<<min;
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