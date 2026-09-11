#include <iostream>
#include <cmath>
#include <fstream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
typedef struct employee{
    string name;
    // char name[10];
    int salary;
}st;
int main(){
    // string name;
    // cout<<"Enter name: ";
     // getline(cin,name);
    ofstream f("name.txt",ios::binary);
    // f.write((char*)&name,sizeof(name))<<endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<"Enter name: ";
    //     getline(cin,name);
    //     f.write((char*)&name,sizeof(name))<<endl;
    // }
st ouremployees[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter name: ";
        cin>>ouremployees[i].name;
        // getline(cin,ouremployees[i].name);
        // cin.getline(ouremployees[i].name,10);
        f.write((char*)&ouremployees[i].name,sizeof(ouremployees[i].name))<<endl;
        cout<<"Enter Salary: ";
        cin>>ouremployees[i].salary;
        f.write((char*)&ouremployees[i].salary,sizeof(ouremployees[i].salary))<<endl;
    }
    f.close();
    return 0;
}