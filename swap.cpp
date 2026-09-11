#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter number :";
    cin>>a;
    cout<<"Enter number :";
    cin>>b;
    a=a*b;     //a=a+b;     
    b=a/b;     //b=a-b;
    a=a/b;     //a=a-b;
    cout<<a<<endl<<b;
    return 0;
}