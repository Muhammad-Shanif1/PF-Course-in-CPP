#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int mergesort(int arr[],int start,int end){
    static int mid;
    if(mid!=1){
    mid=(start+end)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    }
}
int sort(int arr[],int start,int end){
    int temp;
    while(start<end){
        for (int i = start; i <=end ; i++)
        {
            for (int j = start+1; j < end; j++)
            {
                if(arr[i]>arr[j]){
                    temp=arr[j];
                    arr[j]=arr[i];
                    arr[i]=temp;
                }
            }
            
        }
        
    }
}
int merge(int arr[],int start,int end){

}
int main(){
    int mid,start=0,end=7,A[8];
    for (int i = 0; i < 8; i++)
    {
        cout<<"Enter Number: ";
        cin>>A[i]; 
    }
    mergesort(A,start,end);
    return 0;
}