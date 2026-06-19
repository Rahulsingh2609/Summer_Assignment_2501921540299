#include<iostream>
using namespace std;
int linear_search(int a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ele;
    cout<<"Enter the element to be searched : ";
    cin>>ele;
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        c=1;
        else
        c=0;
    }
    return c;
}
int main()
{
    int n;
    cout<<"Enter the no of elemnets in array : ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements in array : ";
    if(linear_search(a,n)==1)
    cout<<"Search is Successful";
    else
    cout<<"Unsuccessful";
}