#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int fib(int);
int main(){
    int n;
    system("cls");
    cout<<"Enter any number: ";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        cout<<" "<<fib(i);
    }
    cout<<"\nThe term in fibonacci sequence at position "<<n<< " is "<<fib(n)<<endl;
    return 0;
}
int fib(int n){
    if(n<2){
        return 1;
    }
    return (fib(n-1)+fib(n-2));
}