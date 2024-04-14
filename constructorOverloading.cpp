#include<iostream>
using namespace std;
class complex{
    int a,b;
    public:
        complex(){
            a=0,b=0;
        }
        complex(int x){
            a=x,b=0;
        }
        complex(int x,int y){
            a=x,b=y;
        }
        void print(){
            cout << a << " + " << b << "i" << endl;
        }
};
int main(){
    complex a;
    complex b(2);
    complex c(10,20);
    a.print();
    b.print();
    c.print();
    return 0;
}