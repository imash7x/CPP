#include <iostream>
#include <stdio.h>
using namespace std;

int power(int m, int n )
{
    if (n==0)
    return 1;
    return power(m,n-1)*m;
}
int power1(int m, int n)
{
    if(n==0)
     return 1;
    if(n%2==0)
     return power1(m*n,n/2);
     return m*power1(m*m,(n-1)/2);
}
int main()
{
    int m,n;
    cout<<"enter a number-"<<endl;
    cin>>m;
    cout<<"enter its power-"<<endl;
    cin>>n;
    int r=power1(m,n);
    cout<<"the value is: "<<r;
    return 0;
}