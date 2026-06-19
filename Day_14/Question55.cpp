#include<iostream>
using namespace std;
void second_largest(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max=0,max1=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
        else if(a[i]>max1 && a[i]!=max)
        max1=a[i];
    }
    cout<<"The second largest no of array : "<<max1;
}
int main()
{
    int n;
    cout<<"Enter the no of elements : ";
    cin>>n;
    cout<<"Enter "<<n<<" elements in array : ";
    int a[n];
    second_largest(a,n);
}