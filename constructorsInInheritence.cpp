/*

class A: public B{
    first (B) then A
}

class A: public B, public C{
    first B() then C() then A()
}

class A: public B, virtual public C{
    first c() then B() then A()
}

*/

#include<iostream>
using namespace std;

class base1{
    private:
        int data1;
    public:
        base1(int d){
            data1=d;
            cout<<"Base1 constructor called "<<endl;
        }
        void printBase1(){
            cout<<"Data 1: "<<data1<<endl;
        }
};

class base2{
    private:
        int data2;
    public:
        base2(int d){
            data2=d;
            cout<<"Base2 constructor called "<<endl;
        }
        void printBase2(){
            cout<<"Data 2: "<<data2<<endl;
        }
};

class derived : public base1, public base2{
    int d1,d2;
    public:
        derived(int a,int b,int c,int d): base1(a),base2(b){
            d1=c;
            d2=d;
        }
        void print(){
            cout<<"Derived1: "<<d1<<endl;
            cout<<"Derived2: "<<d2<<endl;
        }
};

int main(){
    derived ayush(1,2,3,4);
    ayush.printBase1();
    ayush.printBase2();
    ayush.print();
    return 0;
}