#include<iostream>
using namespace std;

class base1{
    public:
        void greet(){
            cout<<"Hii..."<<endl;
        }
};

class base2{
    public:
        void greet(){
            cout<<"hello..."<<endl;
        }
};

class derived : public base1, public base2{
    int a;
    public:
        void greet(){
            base2::greet();
        }
};

// ambiguity-> which greet function to be used from the derived class.

class B{
    public:
        void say(){
            cout<<"Hello ayush"<<endl;
        }
};

class D: public B{
    public:    // say function of ( derivedClass >>> baseClass).
        void say(){
            cout<<"Hello maksood"<<endl;
        }
};
int main(){
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();

    derived d;
    d.greet();

    D ayush;
    ayush.say();
    return 0;
}