#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
    system("cls");
    int n;
    a:
    cout<<"Enter a number ";
    cin>>n;
    for (int i = 2; i <n; i++)
    {
     if(n%i==0){
        cout<<"not a prime number";   
        return 0;
    }
    }    
    cout<<"Prime number\n";
    goto a;
    return 0;
}