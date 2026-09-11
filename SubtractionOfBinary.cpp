#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int binaryToDecimal(int b){
    int decimal=0,power=0,digit;
    while(b!=0){
    digit=b%10;    
    decimal += digit*pow(2,power);
    b /=10;
    power++;
    }
    return decimal;
}    
int main(){
    system("cls");
    int b1,b2,subtract,index=0,binary[index],decimal;
    cout<<"Enter First binary numbers\n";
    cin>>b1;
    cout<<"Enter Second binary numbers\n";
    cin>>b2;
    if(b1<b2){
    cout<<"Please input greater number first.";
    }
    subtract=binaryToDecimal(b1)-binaryToDecimal(b2);
    decimal=subtract;
    if(subtract==0){
        cout<<"Subtract of two number is:\n"<<subtract;
        goto a;
    }
    while(decimal>0){
    binary[index]=decimal%2;
    decimal /=2;
    index++;
    }
    index--;
    cout<<"Subtract of two number is:\n";
    while(index>=0){
        cout<<binary[index];
        index--;
        }
    a:
    return 0;
}   