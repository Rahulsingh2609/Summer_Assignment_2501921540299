#include<iostream>
using namespace std;
int reverse(int n,int r=0)
{
    if(n==0)
    return r;
    return reverse(n/10,r*10+n%10);
}
int main()
{
    int n;
    cout<<"Enter the no : ";
    cin>>n;
    cout<<"The reverse of "<<n<<" is : "<<reverse(n)<<endl;
}