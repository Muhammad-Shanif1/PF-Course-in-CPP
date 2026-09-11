#include<iostream>
using namespace std;
int main()
{
    int x=9;
    int &temp=x;
    // Here, &temp is a reference to the variable x. Any changes made to ref will directly affect x, 
    // and vice versa.

    cout<<temp<<endl<<&temp<<"   "<<&x;
return 0;
}