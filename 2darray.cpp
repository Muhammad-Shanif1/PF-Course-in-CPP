#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    int r,c;
    cout<<"Hoe many rows you wanna make: ";
    cin>>r;
    cout<<"Hoe many columns you wanna make: ";
    cin>>c;
    int A[r][c];        //always initialize after getting number.
    for (int i= 0; i <r; i++)
    {
        cout<<"\t\t\tEnter data in row "<<i+1<<endl;
        for (int j = 0; j < c; j++)
        {
            cout<<"Enter data in column "<<j+1<<" : ";
            cin>>A[i][j];
        }
    }
    cout<<"\t\t\tyour data in 2d array\n";
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<A[i][j]<<endl;
        }
    }
    return 0;
}