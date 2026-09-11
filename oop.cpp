#include<iostream>
using namespace std;
class talha{
    private:   //if we not write private nor public in class,program consider it private for class.
    int n;
    public:
    void talha1(int i);  
};
void talha::talha1(int i){
    n=i;
    cout<<"My name is talha"<<i;
}
int main(){
    talha n;
    n.talha1(5);
    return 0;
}