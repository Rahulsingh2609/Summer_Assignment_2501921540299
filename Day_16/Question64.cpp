#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the no of elements in an array : ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements in an array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
    int duplicate=0;
        for(int j=0;j<i;j++)
        {
            if(a[i]==a[j])
            {
                duplicate = 1;
                break;
            }
        }
        if(duplicate==0)
        {
            cout<<a[i]<<" ";
        }
    }
    return 0;