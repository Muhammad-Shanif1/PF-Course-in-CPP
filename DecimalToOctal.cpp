#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
    /*This program converts octal to decimal.*/
    system("cls");
    int octal,decimal=0,power=0,digit;
    cout<<"Enter the octal number; ";
    cin>>octal;
    while(octal!=0){
    digit=octal%10;    
    decimal += digit*pow(8,power);
    octal /=10;
    power++;
    }
        cout<<"Your number in decimal:\n";
        cout<<decimal;
    return 0;
}