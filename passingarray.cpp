// #include <iostream>
// #include <cmath>
// #include <iomanip>
// #include <stdlib.h>
// #include <time.h>
// using namespace std;
// // int cube(int);
// // int main(){
// //     system("cls");
// //     cout<<"\t\t\tPassing Individual Array Element to Function\n";
// //     int A[5];
// //     for (int i = 0; i < 5; i++)
// //     {
// //         cout<<"Enter number: ";
// //         cin>>A[i];
// //     }
// //     cout<<"Cobe is "<<cube(A[0]);
// //     return 0;
// // }
// // int cube(int a){
// //     return a*a*a;
// // }


// int sum(A[],size);
// int main(){
//     int A[5];
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<"Enter number: ";
//         cin>>A[i];
//     }
//     cout<<"Sum of arrays; "<<sum(A); 
// }


// #include <iostream>
// #include <cmath>
// #include <iomanip>
// #include <stdlib.h>
// #include <time.h>
// using namespace std;
// int sum(int A[],int size);
// int main(){
//     system("cls");
//     cout<<"\t\t\tPassing whole array to function By Dynamic\n";
//     int size;
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int A[size];
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"Enter number: ";
//         cin>>A[i];
//     }
//     cout<<"Sum of all elements of array is: "<<sum(A,size);
//     return 0;
// }

// int sum(int A[],int size){
//     int sum=0;
//     for (int i = 0; i < size; i++)
//     {
//         sum+=A[i];
//     }
//     return sum;
// }
// #include <iostream>
// #include <cmath>
// #include <iomanip>
// #include <stdlib.h>
// #include <time.h>
// using namespace std;
// int sum(int *,int);
// int main(){
//     int size;
//     system("cls");
//     cout<<"\t\t\tPassing array By Poiinter\n";
//     cout<<"Enter size of array: ";
//     cin>>size;
//     int A[size];
//     for (int i = 0; i < size; i++)
//     {
//         cout<<"Enter number: ";
//         cin>>A[i];
//     }
//     cout<<"Sum of all elements of array is: "<<sum(A,size);
//     return 0;
// }
// int sum(int *p,int size){
//     int sum=0;
//     for (int i = 0; i <size; i++)
//     {
//         sum+=*(p+i);
//     }
//     return sum;
// }
#include <iostream>
#include <cmath>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
int sum(int (&A)[5]);
int main(){
    system("cls");
    cout<<"\t\t\tPassing Array By Reference.\n";
    int A[5]={1,2,3,4,5};
    cout<<"Sum of all elements of an array is: "<<sum(A);
    return 0;
}
int sum(int (&A)[5]){
    int sum=0;
    for (int i = 0; i <5; i++)
    {
        sum+=A[i];
    }
    return sum;
}