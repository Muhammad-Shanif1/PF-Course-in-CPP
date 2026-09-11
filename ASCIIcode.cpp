#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <iomanip>
#include <time.h>
#include <cctype>
using namespace std;
int main(){
    //character to ASCII Code
//     char a,b;
//     system("cls");
//     cout<<"Enter letter ";
//     cin>>a;
//     int ascii=a;
//     b=a-32;
//     cout<<"ASCII code of "<<a<<" is "<<ascii<<endl;
//     cout<<"Capital Letter is "<<b;
//     return 0;
        //ASCII Code to character
int ascii;
cout<<"Enter ascii code: ";
cin>>ascii;
cout<<"Your character is: "<<char(ascii);
cout<<char(107);   //prints k
}