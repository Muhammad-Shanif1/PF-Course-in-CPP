#include<iostream>
using namespace std;
int main()
{
    int a,i=0;
    int index=0,sum=0,average,marks[index];
    cout<<"enter the no of subjects :";
    cin>>a;
     while (i <a)
    {
        cout<<"enter the value of first subject :";
        cin>>marks[index];
    sum+=marks[index];
    index++;
     i++;
    }
    average=sum/a;
    cout<<"the sum of "<<a<<" subjects is :"<<sum<<endl;
    cout<<"the average of "<<a<<" subjects is :"<<average<<endl;
    return 0;
}