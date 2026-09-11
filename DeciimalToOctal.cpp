#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
    /*This program converts decimal to octal.*/
    system("cls");
    int decimal,index=0,octal[index];
    a:
    cout<<"Enter the decmal number; ";
    cin>>decimal;
    if(decimal<0){
        cout<<"Invalid entry\n";
        goto a;
    }
    while(decimal>0){
    octal[index]=decimal%8;
    decimal /=8;
    index++;
    }
    index--;
        cout<<"Your number in ocal number system:\n";
    while(index>=0){
        cout<<octal[index];
        index--;
    }    
    //  for (int i = index - 1; i >= 0; i--) {
    //     cout << binary[i];
    //  }
    return 0;
}