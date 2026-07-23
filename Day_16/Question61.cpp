#include<iostream>
using namespace std;
void missing(int a[],int n)
{
    int sum=0,total=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }    
    total=((n+1)*(n+2))/2;
    cout<<"The missing number is : "<<total-sum;
}
int main()
{
    int n;
    cout<<"Enter the no of elements in an array : ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements in array : "; 
    missing(a,n);
}