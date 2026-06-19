#include<iostream>
using namespace std;
void duplicate(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Duplicate elements in array : ";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<a[i]<<" ";
                break;
            }
            else
            {
                continue;
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the no of elements : ";
    cin>>n;
    cout<<"Enter "<<n<<" elements in array : ";
    int a[n];
    duplicate(a,n);
}