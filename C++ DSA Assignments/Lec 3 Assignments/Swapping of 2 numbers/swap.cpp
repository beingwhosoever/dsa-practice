#include<iostream>
using namespace std;
int main()
{
    int a,b,t;
    cout<<"\n Enter the value of a and b : ";
    cin>>a>>b;
    t=a;
    a=b;
    b=t;
    cout<<"\n Values after swapping are a : "<<a<<" and b : "<<b;
    return 0;
}