#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    system("cls");
    int A[2][3],B[6],b=0;
    for (int i = 0; i < 2; i++)
    {
        cout<<"\t\t\tRow "<<i+1<<endl;
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter number in column "<<j+1<<" ";
            cin>>A[i][j];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            B[b]=A[i][j];
            b++;
        }
    }
    cout<<"\t\t\tArray 1d\n";
    for (int i = 0; i < b; i++)
    {
        cout<<B[i]<<endl;
    }
    return 0;
}