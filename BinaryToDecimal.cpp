#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
    /*This program converts binary to decimal.*/
    system("cls");
    int binary,decimal=0,power=0,digit;
    cout<<"Enter the binary number; ";
    cin>>binary;
    while(binary!=0){
    digit=binary%10;    
    decimal += digit*pow(2,power);
    binary /=10;
    power++;
    }
        cout<<"Your number in decimal:\n";
        cout<<decimal;
    return 0;
}