#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;
int main(){
    int sc=2232323,n=9;
    // string st;
    ofstream f;
    // ifstream f;
    f.open("ScoreHistory.txt",ios::app);
    // f<<"Mode\t\t"<<"Score\t\t"<<"Time"<<endl;
    f<<"Classic\t\t"<<sc<<"\t\t"<<93<<endl;
    // for (int i = 0; i <=2; i++)
    // {
    // getline(f,st);
    // cout<<st<<endl;
    // }
    f.close();
    return 0;
}