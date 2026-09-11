#include <iostream>
using namespace std;
void lo(){
    static int mi=0;
    mi+=1;
    cout<<mi;
}
int main()
{
/* this code adds two 
numbers*/
int a=6,b=5,c=a+b;
cout<<"the sum of two numbers is "<<c<<" this is answer";
float l=3.14;
cout<<"\nthe value of pi is: "<<l<<endl;
char n='L';
lo();
bool fl= false;
cout<<n<<fl;
lo();
    return 0;
}