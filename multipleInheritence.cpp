#include<iostream>
using namespace std;

class base1{
    protected:
        int base11;
    public:
        void setBase1(int b){
            base11=b;
        }
};

class base2{
    protected:
        int base22;
    public:
        void setBase2(int b){
            base22=b;
        }
};

class base3{
    protected:
        int base33;
    public:
        void setBase3(int b){
            base33=b;
        }
};

class derived : public base1, public base2,public base3{
    public:
        void display(){
            setBase1(100);
            setBase2(200);
            setBase3(300);
            cout<<"Base1: "<<base11<<endl;
            cout<<"Base2: "<<base22<<endl;
            cout<<"Base3: "<<base33<<endl;   
        }
};

int main(){
    derived d;
    d.display();
    return 0;
}