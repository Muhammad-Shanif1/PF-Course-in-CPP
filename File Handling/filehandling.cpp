#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <fstream>
#include <string.h>
using namespace std;
int main(){
    // string name;
    // cout<<"Enter your name: ";
    // getline(cin,name);
    // Opening files using constructor and writing it
    // ofstream f("name.txt");  //data write

    // ifstream f;     //data read
    // Opening files using constructor and reading it
    // f.open("name.txt");        //For check error
    // if(!f){
    //     cout<<"error";
    //     return 0;
    // }
    // f<<name<<endl;      //write name in file 
    // f>>name;       //read name in file.
    // cout<<name;
    // getline(f,name);     read the whole line
    // cout<<name;
    // f.close();
    // cout<<name;
    // return 0;
    
                    //Search in file.
    // string name,n;
    // ofstream f;
    // // cout<<"name: ";
    // // cin>>n;
    // ifstream f;
    // f.open("Names.txt");
    // cout<<"name: ";
    // cin>>n;
    // // for (int i = 0; i < 5; i++)
    // // {
    // //     cout<<"Enter name: \n";
    // //     cin>>name[i];
    // //     f<<name[i]<<endl;
    // // }
    // for (int i = 0; i < 5; i++)
    // {
    //     f>>name;
    //     if(n==name){         //We also use array for this
    //         cout<<"Found";
    //     }
    // }
    //     if(!f){
    //     cout<<"error";
    //     return 0;
    // // }
    // // f.close();

    string medicines,name;
    // // ofstream M;
    ifstream M;
    M.open("medicines.txt");
    // // if(!M){
    // //     cout<<"Error";
    // //     return 0;
    // // }
    // // for (int i = 0; i < 5; i++)
    // // {
    // //     cout<<"Enter medicine: ";
    // //     getline(cin,medicines);
    // //     M<<medicines<<endl;
    // // }
    cout<<"Enter medicine: ";
    getline(cin,name);
    for (int i = 0; i < 6; i++)
    {
        if(name==medicines){
        cout<<"Found";
        }
        M>>medicines;
        // getline(medicines,n);
    }
    // getline(medicines,name);
    M.close();
    return 0;
}
/*These are some useful classes for working with files in C++

fstreambase
ifstream --> derived from fstreambase
ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:

Using the constructor
Using the member function open() of the class*/