// #include <iostream>
// #include <iomanip>
// using namespace std;  
// int main()
// {
    // float f=8.80f;
    // float t=0.9l; 
    // cout<<"size of "<<sizeof(8.80f);
    // cout<<"size of "<<sizeof(0.9l);
    // return 0;
    // float i=88.99;
    // float & p=i;
    // cout<<(int)i<<endl<<int(p);
    // return 0;

// int a;
// cout<<"shah ne eidi di(1) k nhi(0)";
// cin>>a;
// if (a==1)
// {
//     cout<<"shah ko thanks bolo";
// }
// else if (a==0)

// {
//     cout<<"shah ko rangbaaz bolo";
// }
// else  {
//     cout<<"valid entry";
// }
// return 0;
// }
// int a;
// cout<<"Tell me your marks";
// cin>>a;
// switch (a)
// {
// case 20:
//     cout<<"Pass";
//     break;
// case 22:
//    cout<<"Try again";
//    break;
// default:
// cout<<"Fail";
//     break;
// int a;
// cout<<"Enter number: ";
// cin>>a;
// do
// {
//     cout<<a;
// }while(false);
// return 0;
// }
#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
    int a=3;
    int*b=&a;
    cout<<"adress of a is "<<b<<endl;
    cout<<"address of a is "<<&a<<endl;
    cout<<"value at address a is "<<*b<<endl;
    cout<<sizeof(3)<<endl;
    cout<<"adress of b is "<<&b<<endl;
    cout<<"value at address b is "<<*b<<endl;
    int**c=&b;
    cout<<"adress of b is "<<c<<endl;
    cout<<"adress of c is "<<&c<<endl;
    cout<<"value at adress c is "<<*c<<endl;
    cout<<"value at adress a is "<<*c<<endl;
    cout<<"value at adress a,b,c is "<<**c;
    return 0;
}