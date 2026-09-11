#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    system("cls");
    int a=0,arr1d,r,c;
    cout<<"\t\t\tFor 1D Array\n";
    cout<<"How much 1D array you wanna make: ";
    cin>>arr1d;
    int A[arr1d];
    for (int i = 0; i < arr1d; i++)
    {
        cout<<"Enter number: ";
        cin>>A[i];
    }
    cout<<"\t\t\tFor 2D Array\n";
    cout<<"How much rows you wanna make: ";
    cin>>r;
    cout<<"How much columns you wanna make: ";
    cin>>c;
    int B[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j <c; j++)
        {
            if(A[a]<A[arr1d]){
            B[i][j]=A[a];
            a++;
            }
            else
            B[i][j]=0;
        }   
    }
    for (int i= 0; i <r; i++)
    {
        cout<<endl;
        for (int j = 0; j < c; j++)
        {
            
            cout<<B[i][j]<<" ";
        }
    }
    return 0;
}