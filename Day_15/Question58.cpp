#include<iostream>
using namespace std;
void rotate_left(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int d;
    cout<<"Enter the position of rotation : ";
    cin>>d;
    int temp[n];
    int k=0;
    cout<<"Rotated Array by "<<d<<" : ";
    for(int i=d;i<n;i++)
    {
        temp[k]=a[i];
        k++;
    }
    for(int i=0;i<d;i++)
    {
        temp[k]=a[i];
        k++;
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
    cout<<"Enter the no of elemeents in an array : ";
    cin>>n;
    cout<<"Enter "<<n<<" elements in Array : ";
    int a[n];
    rotate_left(a,n);
}