#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    char ch;
    cout<<"Enter the values of 'a' and 'b' in decimals : \n";
    cin>>a>>b;
    cout<<"Enter the operation to be performed (+ , - , * , / ) : \t";
    cin>>ch;
    switch(ch)
    {
        case '+' : 
            c=a+b;
            cout<<"Sum : "<<c;
            break;
        case '-' : 
            c=a-b;
            cout<<"Difference : "<<c;
            break;
        case '*' : 
            c=a*b;
            cout<<"Product : "<<c;
            break;
        case '/' : 
            c=a/b;
            cout<<"Division Result : "<<c;
            break;
        default : 
            cout<<"Invalid Choice";
            exit(0);
    }
    return 0;
}