#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"enter a number= ";
    cin>>num1;

    cout<<"enter a number=  ";
    cin>>num2;
    cout<<"Add"<<num1+num2<<endl;
    cout<<"Subtract"<<num1-num2<<endl;
    cout<<"Divide"<<num1/num2<<endl;
    cout<<"Remainder"<<num1%num2<<endl;
    cout<<"Multiply"<<num1*num2<<endl;
    cout<<"Greater"<<(num1>num2)<<endl;
    cout<<"Less"<<(num1<num2)<<endl;
    cout<<"Equal"<<(num1==num2)<<endl;
    cout<<"AND"<<((num1>num2)&&(num1==num2))<<endl;
    cout<<"OR"<<((num1>num2)||(num1==num2))<<endl;
    cout<<"NOR AND "<<!((num1>num2)&&(num1==num2))<<endl;
    cout<<"NOR OR "<<!((num1>num2)||(num1==num2))<<endl;
    return 0;
}