#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
    /*The program for prime number invented by:
      Muhammad Shanif*/
    system("cls");
    int n,g=2;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==g){
        cout<<"This number is prime number";
        return 0;
    }
    b:
    for (int m = 1; g*m <= n; m++)
    {
        if(g*m==n){
            cout<<"This is not prime number";
            return 0;
        }
    }
    g++;
    if(g<n){
        goto b;
    }
    cout<<"This is prime number";
    return 0;
}