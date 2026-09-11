#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int main(){
    system("cls");
    int A[3];
    int *p=A;      //it stores the adderess of first index of A array
    for (int i = 0; i < 3; i++)
    {
        cout<<"Enter number: ";
        cin>>A[i];
    }
    cout<<&A<<endl;   //Address of array
    cout<<&A[0]<<endl;
    cout<<&A[1]<<endl;
    cout<<&A[2]<<endl;
    cout<<*p<<endl;
    cout<<p<<endl;   //Address of array
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    return 0;
}