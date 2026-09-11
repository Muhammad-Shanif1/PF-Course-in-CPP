#include<iostream>
using namespace std;
class car{
    private:
    string name,model,year;
    public:
    car(string n,string m,string b){    //parameterized Constructor
     name = n;
     model = m;
     year = b;
     cout<<name<<model<<year;        
    }
};
int main(){
    car car1("BMW","New","2020");
    return 0;
}