#include<iostream>
using namespace std;
int main()
{
    int n,sum;
    cout<<"Enter the number of elements in an array : ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the sum required : ";
    cin>>sum;
    cout<<"Pairs with the given sum are : ";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                cout<<"("<<a[i]<<","<<a[j]<<") ";
            }
        }
    }
    return 0;
}