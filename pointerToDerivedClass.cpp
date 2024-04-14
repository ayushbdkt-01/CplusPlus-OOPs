#include<iostream>
using namespace std;

class base{
    public:
        int data1;
        void display(){
            cout<<"Base class ka function"<<endl;
            cout<<"Data1: "<<data1<<endl;
        }
};

class derived: public base{
    public:
        int data2;
        void display(){
            cout<<"Derived class ka function"<<endl;
            cout<<"Data2: "<<data2<<endl;
        }

};

int main(){
    
    base* baseptr;
    base baseobj;
    derived derivedobj;
    baseptr=&derivedobj;   
     baseptr->data1=1000;
    baseptr->display();

    derived* derivedptr;
    derivedptr=&derivedobj;
    derivedptr->data2=2000;
    derivedptr->display();
    return 0;
}