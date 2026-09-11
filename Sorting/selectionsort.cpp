#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    system("cls");
    int A[10],min,temp;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter number: ";
        cin>>A[i];
    }
    cout<<"Before Sorting\n";
    for (int i = 0; i < 10; i++)
    {
        cout<<A[i]<<endl;
    }
    for (int i = 0; i < 9; i++)    //loop for storing min value
                                    //in A[i] 
    {
        min=i;
        for (int j = i+1; j <10 ; j++) //loop for finding min value in array
                                      //and next min value.
                                      //Not j<9
        {
            if(A[j]<A[min]){
                min=j;
            }
        }
        if(min!=i){       //this condition should be outside the inner loop.
        temp=A[i];
        A[i]=A[min];    //min=j;
        A[min]=temp;
        }
    }
    cout<<"After Sorting\n";
    for (int i = 0; i < 10; i++)
    {
        cout<<A[i]<<endl;
    }   
    return 0;
}