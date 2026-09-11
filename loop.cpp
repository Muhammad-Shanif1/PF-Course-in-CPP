#include <iostream>
using namespace std;
int main()
{
  int a,o;
cout<<"How many times you want to run loop";
cin>>a;
for(o=1;o<=a;o++)
{
  if(o==5)
  continue;
cout<<o<<endl;
}
return 0;
}

