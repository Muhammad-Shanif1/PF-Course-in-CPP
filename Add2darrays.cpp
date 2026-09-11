#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    system("cls");
    int A[3][2],B[3][2];
    for (int i = 0; i <3; i++)
    {
        cout<<"Enter data in row "<<i+1<<endl;
        for (int j = 0; j <2; j++)
        {
            cout<<"Enter number in column "<<j+1<<" ";
            cin>>A[i][j];
            // A[i][j]+=B[i][j];
        }
    }
        cout<<"\t\t\tArray 2nd\n";
        for (int i = 0; i <3; i++)
    {
        cout<<"Enter data in row "<<i+1<<endl;
        for (int j = 0; j <2; j++)
        {
            cout<<"Enter number in column "<<j+1<<" ";
            cin>>B[i][j];
            // A[i][j]+=B[i][j];
        }
    }
    cout<<"Answer is\n";
     for (int i = 0; i <3; i++)
    {
        cout<<endl;
        for (int j = 0; j <2; j++)
        {
            cout<<A[i][j]+B[i][j]<<"\t";
        }
    }  
    return 0;
}