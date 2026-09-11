#include<iostream>
using namespace std;
class prime{
    int num;
    public:
    void prime1(){
        int j;
        cout<<"enter the limit of prime number:";
        cin>>num;
        for (int i = 1; i <= num; i++)
        {
            for ( j = 2; j <=i; j++)
            {
                if (i%j==0)
                {
                    break;
                }
            }
        if (i==j)
        {
             cout<<"prime number is: "<<i<<endl;
        }
        
    }
    }
};
int main(){
    prime number;
    number.prime1();
    return 0;
}