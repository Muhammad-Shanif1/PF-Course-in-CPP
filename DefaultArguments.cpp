#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
// Default Arguements
float profit(int money,float benefit=7.1){
    int profit=money*benefit;
    return profit;
}
int main(){
    int money;
    cout<<"Enter money";
    cin>>money;
    cout<<"Your profit is: "<<profit(money);
    cout<<"For VIP Your profit is: "<<profit(money,9);
    return 0;
}