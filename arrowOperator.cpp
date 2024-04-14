#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
    public:
        void set(int a,int b){
            real=a;
            img=b;
        }
        void print(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

int main(){

    // complex c1; 
    // (*ptr).set(12,13);

    // complex *ptr=&c1;
    complex *ptr=new complex;
    ptr->set(12,14);
    (*ptr).print();

    // array of objects
    complex *arr=new complex[3];
    arr->set(1,2);
    arr->print();
    (arr+1)->set(3,4);
    (arr+1)->print();
    return 0;
}