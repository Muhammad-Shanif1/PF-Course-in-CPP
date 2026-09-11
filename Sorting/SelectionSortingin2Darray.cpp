#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    system("cls");
    int A[3][3],min,temp;
    for (int i = 0; i < 3; i++)
    {
        cout<<"\t\t\tRow "<<i+1<<endl;
        for (int j = 0; j < 3; j++)
        {
            cout<<"Enter number: ";
            cin>>A[i][j];
        }
    }
    min=A[0][0];
     for (int i = 0; i < 3; i++)    //loop for finding min value in array
    {
        for (int j = 0; j <3 ; j++) 
        {
            if((A[i][j])<min){
                min=A[i][j];
            }
        }
    }
    cout<<min;   
    return 0;
}