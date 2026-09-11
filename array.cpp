#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
    system("cls");
//    int income[6]={400,800,987,789,900,600};        
//    cout<<income[0]<<endl;       // array subscript operator []
//    cout<<income[1]<<endl;
//    cout<<income[2]<<endl;                       
//    cout<<income[3]<<endl;
//    cout<<income[4]<<endl;
//    income[5]={300};
//    cout<<income[5]<<endl;
//    cout<<income[6]<<endl;
//    cout<<income[7]<<endl;
// --------------Array in FOR Loop---------
// int income[6]={400,800,987,789,900,600};
// cout<<"These are income\n";
// for (int i = 0; i <=5; i++)
// {
//     cout<<income[i]<<endl;
// }
//  --------------Array in While Loop---------
// int income[6]={400,800,987,789,900,600};
// cout<<"These are income\n";
// int i=0;
// while (i<=5)
// {
//    cout<<income[i]<<endl; 
//    i++;
// }
//  --------------Array in do While Loop---------
//  int income[6]={400,800,987,789,900,600};
// cout<<"These are income\n";
// int i=0;
// do{
//     cout<<income[i]<<endl;
//     i++;
// }while (i<=5);
// -----------------Array and Pointer-------------
int income[6]={400,800,987,789,900,600};
int*p=income;
cout<<"Address of income array is "<<p<<endl;
cout<<"Value of income[0] is "<<*p<<endl;
cout<<"Value of income[1] is "<<*(p+1)+1<<endl;
cout<<"Value of income[2] is "<<*(p+2)<<endl;
cout<<"Value of income[3] is "<<*(p+3)<<endl;
cout<<"Value of income[4] is "<<*(p+4)<<endl;
cout<<"Value of income[5] is "<<*(p+5)<<endl;
cout<<*p++<<endl;
cout<<*++p;
// ----------------By using For Loop---------------
// int income[6]={400,800,987,789,900,600};
// int i=0;
// int*p=income;
// for (int i = 0; i <=5; i++)
// {
//     cout<<"Value of income["<<i<<"] is "<<*(p+i)<<endl;
// }
// ----------------By using While Loop---------------
// int income[6]={400,800,987,789,900,600};
// int i=0;
// int*p=income;
// while (i<=5)
// {
//     cout<<"Value of income["<<i<<"] is "<<*(p+i)<<endl;
//     i++;
// }
// ----------------By using While Loop---------------
// int income[6]={400,800,987,789,900,600};
// int i=0;
// int*p=income;
// do{
//     cout<<"Value of income["<<i<<"] is "<<*(p+i)<<endl;
//     i++;
// }while(i<=5);
    return 0;
}