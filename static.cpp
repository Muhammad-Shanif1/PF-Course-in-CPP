#include<iostream>
using namespace std;
//using static, we use only one variable for different objects.
class talha{
    private:
    static int m;    //static variable starts from 0. 
    public:
    void time(int m1);
    static void fx(int x){       //static method can only handle static members. 
        cout<<"vale is "<<x;     //x is parameter that's why it handles otherwise it doesn't handle non-static members. 
    }
};
void talha::time(int m1){       
    cout<<"time is "<<m1;
    m++;                        ///non-static methods can handle static members.
    cout<<endl<<m;
}
int talha :: m=20;     //its a default value and is is mandatory to initalize outside the class..
int main(){
    talha hn,hn1,hn2;
    hn.time(3);
    hn1.time(3);
    hn2.time(3);
    talha::fx(6);    //static method can be access without making any object.
    return 0;
}