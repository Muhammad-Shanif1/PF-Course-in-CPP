#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int prim[5];
int prime(int A[],int size);
int main(){
    system("cls");
    int A[5],size;
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter number: ";
        cin>>A[i];
    }
    size=sizeof(A)/sizeof(A[0]);
    cout<<"Prime number are \n";
    prime(A,size);
    for (int i = 0; i < 5; i++)
    {
        if(prim[i]!=0){
        cout<<prim[i]<<endl;
        }
    }
    
    return 0;
}
int prime(int A[],int size){
    int b,k=0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 2; j < A[i]; j++)
        {
            if(A[i]%j==0){
            b=i;    
            break;
            }
        }
        if(b!=i){
            // prime[i]=A[i];
            // cout<<A[i]<<endl;
            prim[k]=A[i];
            k++;
        }
    }
return 0;   
}