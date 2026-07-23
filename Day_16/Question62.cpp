#include<iostream>
using namespace std;
void frequency(int a[],int n)    
{
    for(int i=0;i<n;i++)
    {        
        cin>>a[i];
    }  
    int max=0,ele;
    for(int i=0;i<n;i++)
    {
        int c=1;
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            c++;
        }
        if(c>max)
        {
            max=c;
            ele=a[i];
        }
    }
    cout<<"The element with maximum frequency is : "<<ele<<" and its frequency is : "<<max<<endl;
}
int main()
{
    int n;
    cout<<"Enter the no of elements in an array : ";
    cin>>n;
    int a[n];
    cout<<"Enter "<<n<<" elements in array : "; 
    frequency(a,n);
}