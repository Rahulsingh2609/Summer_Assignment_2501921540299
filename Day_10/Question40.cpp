#include<iostream>
using namespace std;
int main()
{
    for(int i=65;i<=69;i++)
    {
        for(int j=1;j<=5-(i-65);j++)
        cout<<" ";
        for(int j=65;j<i;j++)
        cout<<(char)j;
        for(int j=i;j>=65;j--)
        cout<<(char)j;
        cout<<endl;
    }
}