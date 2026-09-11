#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(){
    system("cls");
    int n,A[10],start=0,end=9,mid=0;
    for (int i = 0; i < 10; i++)
    {
        cout<<"Enter number: ";
        cin>>A[i];
    }
    cout<<"Enter number to find: ";
    cin>>n;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(A[mid]==n){
            cout<<"Number is available";
            return 0;
        }
        if(A[mid]<n){
            start=mid+1;
        }
        if(A[mid]>n){
            end=mid-1;
        }
    }
    cout<<"Number is unavailable.";
    return 0;
}