#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int sum(int a,int b){
    int s=a+b;
    return s;
}
int sum(int,int,int);
int main(){
    system("cls");
    int a,b,c;
    cout<<"Enter two numbers to add\n";
    cin>>a>>b;
    cout<<"sum is: "<<sum(a,b);
    cout<<"Enter three numbers to add\n";
    cin>>a>>b>>c;
    sum(a,b,c);


    return 0;
}
int sum(int a,int b,int c){
    int s=a+b+c;
    cout<<"Sum is: "<<s;
    return s;
}
