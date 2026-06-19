#include<iostream>
using namespace std;
void frequency(int a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ele;
    cout<<"Enter the element to be counted : ";
    cin>>ele;
    for(int i=0;i<n;i++)
    {
        if(a[i]==ele)
        c++;
    }
    cout<<"The frequency of "<<ele<<" is : "<<c;
}
int main()
{
    int n;
    cout<<"Enter the no of elemnets in array : ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements in array : ";
    frequency(a,n);
}