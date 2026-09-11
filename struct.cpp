#include<iostream>
using namespace std;
// int main ()
// {
                //Structures and Arrays
    // struct medecine{
    //     string name,manu,expi;
    //     int quantity;
    //     int rackno;
    // };
    // medecine ham[5];
    // int i,j;
    // for ( i = 0; i < 5; i++)
    // {

    //     cout<<"Enter the name of medicine.";
    //     cin>>ham[i].name;
    //     cout<<"Enter the manufacture date of medicine.";
    //     cin>>ham[i].manu;
    //     cout<<"Enter the expiry date of medicine.";
    //     cin>>ham[i].expi;
    //     cout<<"Enter the quantity of medicine.";
    //     cin>>ham[i].quantity;
    //     cout<<"Enter the rackno of medicine.";
    //     cin>>ham[i].rackno;


    // }
//     typedef struct employeer{
//         string sname,dname,seducation,department,deducation;
//         int dsalary,ssalary;

//     }st;       
//     st p[10];
//     for(int i=0;i<2;i++){
//     cout<<"Department: ";
//     cin>>p[i].department;
//     if(p[i].department=="sale"){
//     cout<<"Enter name: ";
//     cin>>p[i].sname;
//     cout<<"Enter salary: ";
//     cin>>p[i].ssalary;
//     cout<<"Enter education: ";
//     cin>>p[i].seducation;
//     }
//     if(p[i].department=="development"){
//     cout<<"Enter name: ";
//     cin>>p[i].dname;
//     cout<<"Enter salary: ";
//     cin>>p[i].dsalary;
//     cout<<"Enter education: ";
//     cin>>p[i].deducation;
//     }
//     }
//     string dep;
//     cout<<"Which Departments's data you want: \n";
//     cin>>dep;
//     cout<<"\t\t\tDATA\n";
//     for(int i=0;i<2;i++){
//     if(dep=="sale"){
//     cout<<"\nName: "<<p[i].sname;
//     cout<<"\nSalary: "<<p[i].ssalary;
    
//     cout<<"\nEducation: "<<p[i].seducation;
//     }
//     if(dep=="development"){
//     cout<<"\nName: "<<p[i].dname;
//     cout<<"\nSalary: "<<p[i].dsalary;
//     cout<<"\nEducation: "<<p[i].deducation;
//     }
//    }
                    //Whole Structure passing.
// struct data{
// int salary,age;
//     };
// int printdata(data o);     //always declare after struct
//     int main(){
//     data p;
//     cout<<"Enter salary";
//     cin>>p.salary;
//     cout<<"Enter age: ";
//     cin>>p.age;
//     printdata(p);
//     return 0;
// }
// int printdata(data o){
// cout<<"REsults\n";
// cout<<o.age<<endl;
// cout<<o.salary;
// }

                    //Structure element passing.
// struct data{
// int salary,age;
//     };
// int printdata(int o);
//     int main(){
//     data p;
//     cout<<"Enter salary";
//     cin>>p.salary;
//     cout<<"Enter age: ";
//     cin>>p.age;
//     printdata(p.salary);
//     return 0;
// }
// int printdata(int o){
// cout<<"REsults\n";
// // cout<<o.age<<endl;
// cout<<o;
// }
                //Structures And Pointers
// struct data{
// int salary,age;
//     };
// int printdata(data o);     //always declare after struct
//     int main(){
//     data p,*ptr=&p;
//     cout<<"Enter salary";
//     cin>>(*ptr).salary;
//     cout<<"Enter age: ";
//     cin>>(*ptr).age;
//     printdata(*ptr);
//     return 0;
// }
// int printdata(data o){
// cout<<"REsults\n";
// cout<<o.salary;
// cout<<o.age<<endl;
// }
                //global structure
typedef struct cinema{
    string user,movie;
    int hallno,tno;
}st;
st cinema[5];
int main(){
   for (int i = 0; i <5; i++)
   {
    cout<<"Enter name; ";
    cin>>cinema[i].movie;
   }
}
