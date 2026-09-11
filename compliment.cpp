#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int binaryToDecimal(int binary){
    int digit,decimal=0,power=0;
    while(binary!=0){
    digit=binary%10;    
    decimal += digit*pow(2,power);
    binary /=10;
    power++;
    }
    return decimal;

}
int digitcount(int n){
    int count=0;
    while(n!=0){
        n/=10;
        count++;
    }
    return count;
}
int main(){
    system("cls");
    int b1,b2,u=0,p=1,k=0;
    a:
    cout<<"Enter first binary number\n";
    cin>>b1;
    cout<<"Enter Second binary number\n";
    cin>>b2; 
    if(b1<b2){
        cout<<"Please input graater binary number first";
        goto a;
    }
    binaryToDecimal(b1);   
    binaryToDecimal(b2);
    digitcount(b2);
    cout<<digitcount(b2)<<endl;
    int digit=digitcount(b2);
    cout<<digit<<endl;
    while(u!=digit){
        k+=p;
        p*=10;
        u++;
        }
    int subtract=k-b2;
    int plus=b1+s;
    cout<<s;
}