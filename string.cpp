#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include<algorithm>  //used for tranform()
using namespace std;
void textcolor(char *fc,char *bc="");
int main(){
    // string n="my name is shanif",N;
    // char name[]="My name is Muhammad shanif";
    // char Name[20];   //not name[];     //last valoe of this array is \0 called null character.
    // cout<<name;    //not name[]
    // cout<<endl<<n<<endl;
    // cout<<"Enter name: \n";
    // cin>>N;
    // cout<<N;   // not show blankspaces and show string before blankspace.  
    // cout<<"\nEnter name: \n";
    // cin>>Name;
    // cout<<Name;  //mot show blankspaces and show string before blankspace.

            //String Finding no blankspace and uppercase
    // string A[]={"hassan","shanif","safwan","talha"},N;
    // cout<<"Enter name to find (blankspace and uppercase not allowed) ";    
    // cin>>N;     
    // for (int i = 0;i<3; i++)    
    // {
    //     if(N==A[i]){
    //         cout<<"name found";
    //         return 0;
    //     }
    // }
    // cout<<"Name not found";

        //     Convert uppercase to lowercase
//     string name;
//     cout<<"Enter your name in UPPERCASE: ";
//     cin>>name;
//     transform(name.begin(),name.end(),name.begin(),::tolower);   //header file <algorithm> used for this container
//     cout<<"Your name in lowercase: "<<name;

    //         Convert lowercase to uppercase
    // string name;
    // cout<<"Enter your name in lowercase: ";
    // cin>>name;
    // transform(name.begin(),name.end(),name.begin(),::toupper);
    // cout<<"Your name in UPPERCASE: "<<name;

            //For blankespace 
    // char name[50];
    // cout<<"Enter name: ";
    // cin.getline(name,50);    //also cin.get(name,50);
    // cout<<name;
//     string n;
//     getline(cin,n);
//     cout<<n;

            //Array of strings
    // string A[10];    //also
    // char A[10][10];    //row show no of string and column show no characters in each string
    // for (int i = 0; i < 9; i++)
    // {
    //     cin>>A[i];
    // }
    // for (int i = 0; i < 9; i++)
    // {
    //     cout<<A[i]<<endl;
    // }    
                //Checks whether integers are in string or not.
    char age[10];
    D:
    cout<<"Enter your age: ";
    cin.getline(age,10);
        for (int i = 0; i < age[i]; i++)
    {
    if(!isdigit(age[i])){
        cout<<"Please enter your age in integers.";
        goto D;
    }
    }

    textcolor("light");
    return 0;
}
void textcolot(char *fc,char *bc){
        if(fc=="light"){
                cout<<"hello";
        }
}