#include<iostream>
using namespace std;
int main(){
    int first, second, third, sum;
    int n;
    cout<<"\n Enter a three digit integer value : ";
    cin>>n;
    first=n/100; //v.imp
    n=n%100;    //v.imp
    second=n/10;    //v.imp
    third=n%10;
    sum=first+second+third;
    cout<<"Sum of all digits of the entered number is : "<<sum;
    return 0;
}