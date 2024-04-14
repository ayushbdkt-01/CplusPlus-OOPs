#include<iostream>
using namespace std;
class number{
    int num;
    public:
        number(){
            num=0;
        }
        number(int n){
            num=n;
        }
        // number(number &c){
        //     num=c.num;
        // }
        void print(){
            cout<<"Number is: "<<num<<endl;
        }
};
int main(){
    number a,b,c(12);
    a.print();
    b.print();
    c.print();
    number d(c);
    d.print();
    return 0;
}