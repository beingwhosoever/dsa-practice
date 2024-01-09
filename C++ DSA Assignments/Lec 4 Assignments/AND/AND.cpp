#include<iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter the values of 'a' and 'b' :\n";
    cin>>a>>b;
    int c;
    (a<50 && a<b)?c=1:c=0;
    cout<<c<<endl;
    return 0;
}