#include<iostream>
using namespace std;
int maxx(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Maximum: " << maxx(a, b) << endl;
    return 0;
}