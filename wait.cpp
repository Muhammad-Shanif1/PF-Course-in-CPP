#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
using namespace std;
int main(){
    int time=100;
    while(true){
    // for (int i = 0; i < 1; i++)
    // {
    // }
        Sleep(500);
    cout<<"Please wait";
        cout<<"-";
    for (int i = 0; i <1; i++)
    {
        Sleep(2000);
    cout<<"time(sec)left=";
        cout<<time-i<<endl;
    }
    }
    
    return 0;
}