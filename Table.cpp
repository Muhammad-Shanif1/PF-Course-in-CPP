#include <iostream>
using namespace std;
int main()
{
   int a=1,o,l;
cout<<"Which multiplication table you want to see; ";
cin>>o;
cout<<"how much:";
cin>>l;
while(a<=l)
{
    cout<<o<<" * "<<a<<"="<<(o*a)<<endl;
    a++;
}
    return 0;
}


