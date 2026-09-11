#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
            // Using Recursive function
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}
int main(){
    system("cls");
    int n;
    cout<<"Enter a number for factorial: ";
    cin>>n;
    cout<<"Factorail of "<<n<<" is\n"<<factorial(n);
    return 0;
}
            // Using Loop
// int main(){
//     int n,c=1;
//     cout<<"Enter number: ";
//     cin>>n;
//     while (n>0)
//     {
//         c*=n;
//         n--;
//     }
//     cout<<"Answer: "<<c;
//     return 0;
// }