#include<iostream>
using namespace std;
class number{
    int num;
    public:
        number(int n){
            num=n;
        }
        ~number(){
            cout<<"Destructor called "<<endl;
        }
        void print(){
            cout<<"Number is: "<<num<<endl;
        }
};
int main(){
    number a(12);
    a.print();
    return 0;
}