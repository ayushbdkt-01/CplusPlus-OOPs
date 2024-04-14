#include<iostream>
using namespace std;

class complex{
        int real;
        int img;
        friend complex sum(complex,complex);
    public:
        void input(int a,int b){
        real=a;
        img=b;
        }
        void display(){
        cout<<real<<" + "<<img<<"i"<<endl;
        }
};

complex sum(complex a,complex b){
    complex c;
    c.real=a.real+b.real;
    c.img=a.img+b.img;
    return c;
}

int main(){
    
    complex a,b,c;
    
    a.input(1,2);
    b.input(3,4);
    
    a.display();
    b.display();
    
    c=sum(a,b);
    c.display();
    
    return 0;
}