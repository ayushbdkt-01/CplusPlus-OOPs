#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    complex(int x,int y){
        a=x,b=y;
    }
    void display(){
        cout<<a<<" + "<<b<<"i"<<endl;
    }
};

class point{
    int x,y;
    public:
        point(int a,int b){
            x=a,y=b;
        }
        void display(){
            cout<<"( "<<x<<" , "<<y<<" )"<<endl;
        }
};

int main(){
    
    complex a(10,20);   // implicit call
    complex b=complex(11,12);   // explicit call

    a.display();
    b.display();


    point a1(12,11);
    point b1(123,1333);
    a1.display();
    b1.display();
    return 0;
}