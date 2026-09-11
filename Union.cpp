#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
// typedef union student{
//     int marks;
//     int id;
// }st;
// int main(){
//     system("cls");
//     st shanif;
//     shanif.marks=100;
//     shanif.id=88;
//     cout<<shanif.marks<<endl;
//     cout<<shanif.id;
//     return 0;
// }
union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};
int main(){
        union money m1;
        m1.rice = 34;
        cout<<m1.rice;
        return 0;
}