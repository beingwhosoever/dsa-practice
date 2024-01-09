#include<iostream>
using namespace std;
int main(){
    int first, second, third, fourth, fifth, sum;
    int n;
    cout<<"\n Enter a five digit integer value : ";
    cin>>n;
    first=n/10000; //v.imp
    n=n%10000;    //v.imp
    second=n/1000; //v.imp
    n=n%10000;   //v.imp
    third=n/100; //v.imp
    n=n%100; //v.imp
    fourth=n/10; //v.imp
    fifth=n%10; //v.imp
    sum=first+fourth;
    cout<<"Sum of first and second last digits of the entered number is : "<<sum;
    return 0;
}