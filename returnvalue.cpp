#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
// a and b are formal parameters that
//  takes values from actual parameters.    
   inline int product(int a,int b){
    static int p;
    return p=a*b;
}
// void k(){
    // void is used bcs it neither takes nor gives value. 
void k(void){
    cout<<"\nThanks for using";
}
int main(){
    system("cls");
    int num1,num2;
    c:
    cout<<"\nEnter a number: ";
    cin>>num1;
    cout<<"Enter a 2nd number: ";
    cin>>num2;
    // num1 and num2 are actual parameters.
    cout<<"Product is: "<<product(num1,num2);
    k();
    goto c;
    return 0;
}
