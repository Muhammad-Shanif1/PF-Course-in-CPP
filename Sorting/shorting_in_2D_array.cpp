#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
int main()
{
    long int n,n1;
    a:
    cout<<"enter the no. of rows:";
    cin>>n;
    if (n<=0||n>509)
    {
        cout<<"please enter the correct no. of rows in the limit."<<endl;
        cout<<"the limit of rows is 1 to 509."<<endl;
        goto a;
    }
    b:
    cout<<"enter the no. of coloums:";
    cin>>n1;
    if (n1<=0||n1>509)
    {
        cout<<"please enter the correct no. of coloums in the limit."<<endl;
        cout<<"the limit of coloums is 1 to 509."<<endl;
        goto b;
    }
    
    long long int arr[n][n1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout<<"enter the value:";
            cin>>arr[i][j]; 
        }
    }
    cout<<"the values of 2D array without shorting:"<<endl;
      for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout<<setw(5)<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        int r=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <n1 ; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    for (int y = r; y < n1; y++)
                    {
                        if (arr[i][j]<arr[k][y])
                        {
                            int temp=arr[i][j];
                            arr[i][j]=arr[k][y];
                            arr[k][y]=temp;
                        }
                    }
                    r=0; 
                }
            }
        }
    cout<<"the values of 2D arry in shorting:"<<endl;
    long long int g=arr[0][0];
    long long int h=arr[0][0];
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n1; j++)
        {
            cout<<setw(5)<<arr[i][j]<<" ";
            g=max(g,arr[i][j]);
            h=min(h,arr[i][j]);
        }
        cout<<endl;
    }  
    system("pause"); 
    cout<<"the maximum vlaue in array is: "<<g<<endl;
    cout<<"the minimum vlaue in array is: "<<h<<endl;
    return 0;
}
