#include<iostream>
using namespace std;
void zeroes_to_end(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int temp[n];
    int k=0;
    cout<<"Array after moving zeroes to end : ";
    for(int i=0;i<n;i++)
    {
        if(a[i]!=0)
        {
            temp[k]=a[i];
            k++;
        }
    }
    for(int i=k;i<n;i++)
    {
        temp[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        a[i]=temp[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Enter the no of elements in an Array : ";
    cin>>n; 
    cout<<"Enter "<<n<<" elements in Array : ";
    int a[n];
    zeroes_to_end(a,n);
}