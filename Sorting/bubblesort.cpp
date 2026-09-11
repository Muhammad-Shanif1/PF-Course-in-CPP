#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    system("cls");
    int A[10],temp,i;
    for ( i = 0; i < 10; i++)
    {
        cout<<"Enter number: ";
        cin>>A[i];
    }
    cout<<"The orignal sorting numbers\n";
    for ( i = 0; i < 10; i++)
    {
        cout<<A[i]<<endl;
    }
    for ( i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    cout<<"Sorting ascending order\n";
    for ( i = 0; i < 10; i++)
    {
        cout<<A[i]<<endl;
    }
    return 0;
}