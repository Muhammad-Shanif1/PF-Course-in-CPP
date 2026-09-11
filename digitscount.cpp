#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
int main(){
    system("cls");
    int n,count=0;
    cout<<"Enter some numbers:\n";
    cin>>n;
    while(n!=0){
        n/=10;
        count++;
    }
    cout<<"The number of digits in "<<n<<" is\n"<<count<<endl;
    system("pause");
    return 0;
}