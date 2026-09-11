#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    system("cls");
    int B[5],r=0;
    string A[2][3],n;
      for (int i = 0; i <2; i++)
    {
        cout<<"Enter data in row "<<i+1<<endl;
        for (int j = 0; j <3; j++)
        {
            cout<<"Enter number in column "<<j+1<<" ";
            cin>>A[i][j];
        }
    }
    cout<<"Enter number to find: ";
    cin>>n;
      for (int i = 0; i <2; i++)
    {
        for (int j = 0; j <3; j++)
        {
            if(n==A[i][j]){
                A[i][j]=n;
                B[r]=i;
                r++;
                B[r]=j;
                r++;
            }
            if(A[i][j]!=n){
            A[i][j]="#";    
            }
        }
    }
    cout<<"\t\t\tOutput";
    for (int i= 0; i <2; i++)
    {
        cout<<endl;
        for (int j = 0; j < 3; j++)
        {
            
            cout<<A[i][j]<<" ";
        }
    }
    for (int i = 0; i <r; i++)
    {
        cout<<endl;
        cout<<"Number is available at row number: "<<B[i]+1<<endl;
        cout<<"Number is available at column number: "<<B[i+1]+1;
        i++;
    }
    return 0;
}