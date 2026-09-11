#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
    /*This program converts decimal to binary.*/
    system("cls");
    int decimal,index=0,binary[index];
    a:
    cout<<"Enter the decmal number; ";
    cin>>decimal;
    if(decimal<0){
        cout<<"Invalid entry\n";
        goto a;
    }
    while(decimal>0){
    binary[index]=decimal%2;
    decimal /=2;
    index++;
    }
    index--;
        cout<<"Your number in binary:\n";
    while(index>=0){
        cout<<binary[index];
        index--;
    }    
    //  for (int i = index - 1; i >= 0; i--) {
    //     cout << binary[i];
    //  }
    return 0;
}