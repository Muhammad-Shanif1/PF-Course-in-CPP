#include <iostream>
using namespace std;
int sum(int num1,int num2,int num3){
int p=num1+num2+num3;
return p;
}
int avg(int num1,int num2,int num3){
    int p;
int avg=p/3;
}
int main(){
int a,b,c;
cout<<"enter marks";
cin>>a;
cout<<"enter marks";
cin>>b;
cout<<"enter marks";
cin>>c;
// sum(a,b,c);
cout<<"sum is "<<sum(a,b,c)<<endl;
cout<<"avg is "<<avg(a,b,c)<<endl;
return 0;
}
