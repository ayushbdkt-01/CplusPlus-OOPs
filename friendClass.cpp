#include <iostream>
using namespace std;
class complex;
class calculator{
    int a;
    int b;
    public:
        int add(){
            return a+b;
        }
        void sumComplex(complex,complex);
};
class complex{
    int real;
    int img;
    friend void calculator:: sumComplex(complex,complex);
    public:
        void input(int a,int b){
            real=a;
            img=b;
        }
        void display(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

void  calculator :: sumComplex(complex a,complex b){
            real=a.real+b.real;
            img=a.img+b.img;
        }

int main() {
    complex a,b;
    
    a.input(1,2);
    a.display();
    
    b.input(1,2);
    b.display();
    calculator c;
    c.sumComplex(a,b);
    c.display();
    return 0;
}