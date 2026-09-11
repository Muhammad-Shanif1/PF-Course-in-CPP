#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
class student{
    private:
    int a,b,c=9;
    // cout<<c;       not used bcz this is not name of type.but this can use in function.                 
    // int sum(int s,int n){
        // cout<<"sum is"<<s+n;
    // }
    public:
    int d,e;
    int stmarks(int a1,int b1);
    void getdata(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b1 is "<<b<<endl;
        cout<<"value of c1 is "<<c<<endl;
        cout<<"value of d is "<<d<<endl;
        cout<<"value of e is "<<e<<endl;
    }
};
int student::stmarks(int a1,int b1){
    a=a1;
    b=b1;
    // c=c1;
}
int main(){
    student shanif;
    shanif.d=1;
    shanif.e=2;
    // shanif.c=5;    not assigned due to private.
    shanif.stmarks(3,4);
    shanif.getdata();
    // shanif.sum(1,2);           not used du to private.
    return 0;
}