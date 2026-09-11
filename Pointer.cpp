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
    cout<<"value at adress a,b,c is "<<**c;
    return 0;
}